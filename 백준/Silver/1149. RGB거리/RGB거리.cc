#include <iostream>
#include <algorithm>

using namespace std;

int map[1001][4], dp[1001][4];
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> map[i][1] >> map[i][2] >> map[i][3];
    }
    dp[1][1] = map[1][1], dp[1][2] = map[1][2], dp[1][3] = map[1][3];
    for (int i = 2; i <= N; i++) {
        dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + map[i][1];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + map[i][2];
        dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + map[i][3];
    }
    cout << min({ dp[N][1], dp[N][2], dp[N][3] });

    return 0;
}