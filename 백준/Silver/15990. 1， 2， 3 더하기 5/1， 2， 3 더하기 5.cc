#include <iostream>

using namespace std;

long long dp[100001], arr[100001][4];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	arr[1][1] = arr[2][2] = arr[3][1] = arr[3][2] = arr[3][3] = 1;
	dp[1] = dp[2] = 1, dp[3] = 3;

	for (int i = 4; i <= 100000; i++) {
		arr[i][1] = (arr[i - 1][2] + arr[i - 1][3]) % 1000000009;
		arr[i][2] = (arr[i - 2][1] + arr[i - 2][3]) % 1000000009;
		arr[i][3] = (arr[i - 3][1] + arr[i - 3][2]) % 1000000009;
		dp[i] = (arr[i][1] + arr[i][2] + arr[i][3]) % 1000000009;
	}

	int N;
	cin >> N;

	for (int tc = 0; tc < N; tc++) {
		int a;
		cin >> a;
		cout << dp[a] << '\n';
	}
	int de = 1;
	return 0;
}