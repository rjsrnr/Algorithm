#include <iostream>
#include <algorithm>

using namespace std;

int arr[322], dp[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i <= N; i++)
        dp[i] = 21e8;
    for (int i = 1; i <= 320; i++) {
        arr[i] = i * i;
        dp[arr[i]] = 1;
    }
    for (int i = 0; i <= N; i++) {
        for (int j = 1; j <= 320; j++) {
            int cnt = dp[i] + 1;
            int idx = arr[j] + i;
            if (idx > N)
                break;
            dp[idx] = min(cnt, dp[idx]);
        }
    }
    cout << dp[N];
    return 0;

}