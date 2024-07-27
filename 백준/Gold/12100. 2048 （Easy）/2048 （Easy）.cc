#include <iostream>
#include <algorithm>

using namespace std;

struct flag {
	int num, flag;
};
struct point {
	int y, x;
};

int a[21][21];
flag map[21][21];
int dy[] = { -1,1,0,0 }, dx[] = { 0,0,-1,1 };
int N, mxval;

void grav(int dir) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[i][j].flag = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			point now;
			if (dir == 0)
				now.y = i, now.x = j;
			else if (dir == 1)
				now.y = N - i - 1, now.x = j;
			else if (dir == 2)
				now.y = i, now.x = j;
			else if (dir == 3)
				now.y = i, now.x = N - j - 1;
			if (map[now.y][now.x].num == 0)
				continue;
			point tmp = now;
			while (1) {
				point next;
				next.y = tmp.y + dy[dir];
				next.x = tmp.x + dx[dir];

				if (next.y < 0 || next.x < 0 || next.y >= N || next.x >= N) {
					if (tmp.y != now.y || tmp.x != now.x)
						map[tmp.y][tmp.x].num = map[now.y][now.x].num, map[now.y][now.x].num = 0;
					break;
				}
				else if (map[next.y][next.x].num == map[now.y][now.x].num && map[next.y][next.x].flag == 0) {
					map[next.y][next.x].num *= 2;
					mxval = max(map[next.y][next.x].num, mxval);
					map[next.y][next.x].flag = 1;
					map[now.y][now.x].num = 0;
					break;
				}
				else if (map[next.y][next.x].num == 0)
					tmp = next;
				else {
					if (tmp.y != now.y || tmp.x != now.x) {
						map[tmp.y][tmp.x].num = map[now.y][now.x].num;
						map[now.y][now.x].num = 0;
					}
					break;
				}
			}
		}
	}



	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = map[i][j].num;
		}
	}




}

void solve(int level) {
	if (level >= 5)
		return;
	flag tmp[21][21];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			tmp[i][j] = map[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		grav(i);
		solve(level + 1);
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < N; x++) {
				map[y][x] = tmp[y][x];

				a[y][x] = map[y][x].num;

			}
		}

	}
}

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j].num;
			mxval = max(mxval, map[i][j].num);
			a[i][j] = map[i][j].num;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	input();
	solve(0);

	cout << mxval;

	return 0;

}