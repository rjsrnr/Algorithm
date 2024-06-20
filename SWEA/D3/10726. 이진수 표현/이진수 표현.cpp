#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int N, M;
		cin >> N >> M;
		int cmp = (1 << N) - 1;
		
		if (cmp == (cmp & M))
			cout << "#" << tc << " " << "ON" << '\n';
		else
			cout << "#" << tc << " " << "OFF" << '\n';

	}
	return 0;
}