#include <bits/stdc++.h>
using namespace std;

int n;
int R[1003], G[1003], B[1003];
int D[1003][3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; ++i) 
		cin >> R[i] >> G[i] >> B[i];
	
	D[1][0] = R[1];
	D[1][1] = G[1];
	D[1][2] = B[1];

	for (int i = 2; i <= n; ++i) {
		D[i][0] = min(D[i - 1][1], D[i - 1][2]) + R[i];
		D[i][1] = min(D[i - 1][0], D[i - 1][2]) + G[i];
		D[i][2] = min(D[i - 1][0], D[i - 1][1]) + B[i];
	}

	cout << min({ D[n][0],D[n][1],D[n][2] });
}

/*

1. 테이블 정의하기
	D[i] = i번째 집까지 칠했을 때의 최솟값으로 두는 방식으로는 점화식을 세울 수 없다. 이웃한 집끼리는 색이 달라야 한다는 규칙이 있는데, 이 D[i]의 정의로는 이 규칙을 고려하게끔 점화식을 만들 수 없다. 테이블을 정의할 때 색상에 대한 정보가 추가적으로 들어가게끔 이렇게 정의해야 한다.
	D[i][0] = i번째 집까지 칠할 때 비용의 최솟값, 단 i번째 집은 빨강
	D[i][1] = i번째 집까지 칠할 때 비용의 최솟값, 단 i번째 집은 초록
	D[i][2] = i번째 집까지 칠할 때 비용의 최솟값, 단 i번째 집은 파랑

2. 점화식 찾기
	D[k][0] = ?
	k번째 집에 빨간색을 칠한다면, k-1번째 집은 초록 혹은 파랑이어야만 한다. 둘 중에 최소값을 가져온다. R, G, B는 각 집을 칠하는 비용이다.
	D[k][0] = min(D[k-1][1], D[k-1][2]) + R[k]
	마찬가지 방법으로
	D[k][1] = min(D[k-1][0], D[k-1][2]) + G[k]
	D[k][2] = min(D[k-1][0], D[k-1][1]) + B[k]

3. 초기값 정하기
	D[k][...]를 계산할 때 D[k-1][...]만 필요하므로 D[1][...]만 초기값을 주면 된다.
	D[1][0] = R[1]
	D[1][1] = G[1]
	D[1][2] = B[1]

*/