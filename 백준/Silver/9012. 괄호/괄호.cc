#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		int le = 0, ri = 0;
		int flag = 0;
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == '(')
				le++;
			else
				ri++;

			if (le < ri){
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			cout << "NO" << '\n';
		else if (le == ri)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}