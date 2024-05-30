#include <iostream>

using namespace std;

int dp[1000001];
int N, now = 3;

int main() {
	cin >> N;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int t = 0; t < N; t++) {
		int num;
		cin >> num;
		
		if (num <= now) {
			cout << dp[num] << endl;
			continue;
		}
		for (int i = now + 1; i <= num; i++) {
			long long tmp = 0;
			for (int j = i-3; j < i; j++) {
				tmp += dp[j];
			}
			dp[i] = tmp % 1000000009;
		}
		now = num;
		cout << dp[num] << endl;
	}

	return 0;
}