#include <iostream>

using namespace std;

int dp[1201], val[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> val[i];
	}
	for (int i = 1; i <= N; i++)
		dp[i] = 21e8;
	for (int i = 0; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int tmp_val = dp[i] + val[j];
			if (i+j > N || dp[i + j] <= tmp_val)
				continue;
			dp[i + j] = tmp_val;
		}
	}

	cout << dp[N];

	return 0;
}