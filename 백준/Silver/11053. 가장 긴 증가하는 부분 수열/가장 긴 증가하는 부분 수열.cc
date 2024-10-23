#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    vector<int> dp;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    dp.push_back(21e8);
    for(int i = 0 ; i < N ; i++){
        if(dp[dp.size() - 1] < arr[i])
            dp.push_back(arr[i]);
        else{
            auto val = lower_bound(dp.begin(), dp.end(), arr[i]);
            *val = arr[i];
        }
    }
    cout << dp.size();
    
    return 0;
}