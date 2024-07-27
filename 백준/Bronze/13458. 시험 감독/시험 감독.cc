#include <iostream>

using namespace std;

int N, B, C;
long long cnt;
int map[1000001];

void solve() {
	for (int i = 0; i < N; i++) {
		if (map[i] == 0)
			continue;
		else if (map[i] <= C)
			cnt++;
		else {
			int tmp = map[i] / C;
			if (map[i] % C == 0)
				cnt += tmp;
			else
				cnt += tmp + 1;
		}
	}
}

void input() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> map[i];
	cin >> B >> C;
	cnt = N;
	for (int i = 0; i < N; i++) {
		if (map[i] - B < 0)
			map[i] = 0;
		else
			map[i] = map[i] - B;
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	input();
	solve();

	cout << cnt;

	return 0;
}