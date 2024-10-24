#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1002], dp[1002];
vector<int> vec, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    dp[0] = 1, vec.push_back(arr[0]);
    for (int i = 1; i < N; i++) {
        if (vec[vec.size() - 1] < arr[i]) {
            vec.push_back(arr[i]);
            dp[i] = vec.size();
        }
        else {
            int idx = lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin();
            dp[i] = idx + 1;
            vec[idx] = arr[i];
        }
    }
    int tmp = vec.size();
    cout << tmp << '\n';
    for (int i = N - 1; i >= 0; i--) {
        if (dp[i] == tmp) {
            ans.push_back(arr[i]);
            tmp--;
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << ' ';

    return 0;
}