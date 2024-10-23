#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp1[100001], dp2[100001];


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int idx;
		cin >> idx;
		dp1[idx] = i;
	}
	for (int i = 0; i < T; i++) {
		int idx;
		cin >> idx;
		dp2[i] = dp1[idx];
	}

	vector<int> dp3;
	dp3.push_back(21e8);
	for (int i = 0; i < T; i++) {
		if (dp3[dp3.size() - 1] < dp2[i])
			dp3.push_back(dp2[i]);
		else {
			auto idx = lower_bound(dp3.begin(), dp3.end(), dp2[i]);
			*idx = dp2[i];
		}

	}
	cout << dp3.size();

	return 0;
}