#include <iostream>

using namespace std;

long long dp[100001];
int arr[21];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        int N;
        cin >> N;

        dp[0] = 1;
        for (int i = 1; i <= N; i++)
            cin >> arr[i];
        int M;
        cin >> M;
        for (int i = 1; i <= M; i++)
            dp[i] = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = arr[i]; j <= M; j++) {
                dp[j] = dp[j] + dp[j - arr[i]];
            }
        }
        cout << dp[M] << '\n';
    }


    return 0;
}