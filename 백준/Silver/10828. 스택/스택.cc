#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int map[10001] = { 0, };
	int idx = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			map[idx] = num;
			idx++;
		}
		else if (cmd == "top") {
			if (idx == 0)
				cout << -1 << '\n';
			else
				cout << map[idx - 1] << '\n';
		}
		else if (cmd == "size") {
			cout << idx << '\n';
		}
		else if (cmd == "pop") {
			if (idx == 0)
				cout << -1 << '\n';
			else {
				idx--;
				cout << map[idx] << '\n';
			}
		}
		else if (cmd == "empty") {
			if (idx == 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}

	return 0;

}