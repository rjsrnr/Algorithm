#include <iostream>
#include <string>

using namespace std;

int N;
int goal = (1 << 10) - 1;
int ans;


int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		
		int time = 1;
		int result = 0;
		while (1) {
			string cmp = to_string(N * time);
			for (int i = 0; i < cmp.length(); i++) {
				int tmp = cmp[i] - '0';
				result = result | (1 << tmp);
			}

			if (result == goal){
				ans = stoi(cmp);
				break;
			}
			time++;
		}
		cout << "#" << tc << " " << ans << '\n';
	}
}