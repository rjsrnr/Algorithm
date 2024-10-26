#include <iostream>
#include <algorithm>

using namespace std;

int N, result = -21e8;
int map[100001];
int dp[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> map[i];

    dp[0] = map[0];
    result = max(dp[0], result);

    for (int i = 1; i < N; i++) {
        if (dp[i - 1] + map[i] < map[i]) {
            dp[i] = map[i];
        }
        else {
            dp[i] = dp[i - 1] + map[i];

        }
        result = max(result, dp[i]);
    }

    cout << result;
    return 0;
}