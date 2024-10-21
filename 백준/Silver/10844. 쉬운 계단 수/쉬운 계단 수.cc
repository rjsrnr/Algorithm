#include <iostream>

using namespace std;

int dp[10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	dp[0] = dp[1] = dp[9] = 1;
	dp[2] = dp[3] = dp[4] = dp[5] = dp[6] = dp[7] = dp[8] = 2;

	int N;
	cin >> N;
	if (N == 1){
		cout << 9;
		return 0;
	}
	for (int i = 2; i < N; i++) {
		int tmp[10] = { 0, };
		for (int j = 0; j < 10; j++) {
			int a, b;
			a = j - 1, b = j + 1;
			if(a >= 0){
				int val = dp[j];
				tmp[a] += val;
				tmp[a] %= 1000000000;
			}
			if (b <= 9) {
				int val = dp[j];
				tmp[b] += val;
				tmp[b] %= 1000000000;
			}
		}
		for (int j = 0; j < 10; j++)
			dp[j] = tmp[j];
	}
	int result = 0;
	for (int i = 0; i <= 9; i++)
		result += dp[i], result %= 1000000000;

	cout << result;

	return 0;
}