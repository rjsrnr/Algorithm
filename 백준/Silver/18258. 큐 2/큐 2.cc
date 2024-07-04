#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int tmp_ed;

	queue<int> q;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		if (input == "push") {
			cin >> tmp_ed;
			q.push(tmp_ed);
		}
		else if (input == "pop") {
			if (q.size() == 0)
				cout << -1 << '\n';
			else {
				int a = q.front();
				q.pop();
				cout << a << '\n';
			}

		}
		else if (input == "size") {
			cout << q.size() << '\n';
		}
		else if (input == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "front") {
			if (q.size() == 0)
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (input == "back"){
			if (q.size() == 0)
				cout << -1 << '\n';
			else
				cout << tmp_ed << '\n';
		}
	}

	return 0;
}


