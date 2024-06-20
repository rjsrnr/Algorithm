#include <iostream>
#include <string>

using namespace std;

int N, ans, cnt;
int map[10];


int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		for (int i = 0; i < 10; i++) {
			map[i] = 0;
		}
		cnt = 0;
		int time = 1;
		while (1) {
			string cmp = to_string(N * time);
			for (int i = 0; i < cmp.length(); i++) {
				int tmp = cmp[i] - '0';
				if (map[tmp] == 0) {
					map[tmp] = 1;
					cnt++;
				}
			}

			if (cnt == 10){
				ans = stoi(cmp);
				break;
			}
			time++;
		}
		cout << "#" << tc << " " << ans << '\n';
	}
}