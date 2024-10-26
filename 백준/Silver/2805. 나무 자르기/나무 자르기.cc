#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[1000001];
 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    int maxval = 0, minval = 21e8;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        maxval = max(maxval, arr[i]);
        minval = min(minval, arr[i]);
    }
    
    long long result = 0;
    long long st, en, mid;
    st = 0, en = maxval;
    while (st <= en) {
        mid = (st + en) / 2;
        long long cnt = 0;
        for (int i = 0; i < N; i++) {
            if (mid >= arr[i])
                continue;
            cnt += arr[i] - mid;
        }
        if (cnt == M) {
            cout << mid;
            return 0;
        }
        else if (cnt > M) {
            st = mid + 1;
            result = mid;
        }
        else if (cnt < M) {
            en = mid - 1;
        }

    }

    cout << result;

    return 0;
}