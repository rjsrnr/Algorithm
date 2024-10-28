#include <iostream>

using namespace std;

long long dp[100001], arr[4][100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	arr[1][1] = arr[2][2] = arr[1][3] = arr[2][3] = arr[3][3] = 1;
	dp[1] = dp[2] = 1, dp[3] = 3;
	for (int i = 4; i <= 100000; i++) {
		arr[1][i] = (arr[2][i - 1] + arr[3][i - 1]) % 1000000009;
		arr[2][i] = (arr[1][i - 2] + arr[3][i - 2]) % 1000000009;
		arr[3][i] = (arr[1][i - 3] + arr[2][i - 3]) % 1000000009;
		dp[i] = (arr[1][i] + arr[2][i] + arr[3][i]) % 1000000009;
	}

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		cout << dp[tmp] << '\n';
	}

	return 0;
}