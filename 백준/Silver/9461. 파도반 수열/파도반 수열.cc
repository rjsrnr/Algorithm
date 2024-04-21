#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[1000] = { 0 };
    arr[1] = arr[2] = arr[3] = 1;
    arr[4] = arr[5] = 2;
    int maxval = 5; // maxval 초기값을 5로 설정

    for (int t = 0; t < N; t++) {
        int n;
        cin >> n;

        if (n <= maxval) { // 이미 계산된 값인 경우
            cout << arr[n] << endl;
        }
        else { // 새로운 값을 계산해야 하는 경우
            for (int i = maxval + 1; i <= n; i++) {
                arr[i] = arr[i - 1] + arr[i - 5];
            }
            maxval = n; // maxval 업데이트
            cout << arr[n] << endl;
        }
    }

    return 0;
}