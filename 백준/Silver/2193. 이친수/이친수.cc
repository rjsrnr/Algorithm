#include <iostream>

using namespace std;

long long dp[101][2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    dp[1][1] = 1;
    if (N == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 2; i <= N; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    cout << dp[N][0] + dp[N][1];

    return 0;
}