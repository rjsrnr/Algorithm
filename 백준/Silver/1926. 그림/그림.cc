#include <iostream>
#include <queue>
#include <vector>


using namespace std;

struct point {
	int y, x;
};

int map[501][501];
int dy[] = { -1,1,0,0 }, dx[] = { 0,0,-1,1 };
int N, M, max_val, cnt;


void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
}

void bfs(int y, int x) {
	map[y][x] = 0;
	queue<point> q;
	q.push({ y, x });
	int tmp = 1;
	while (!q.empty()) {
		point now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			point next = { 0, };
			next.y = now.y + dy[i];
			next.x = now.x + dx[i];
			if (next.y < 0 || next.x < 0 || next.y >= N || next.x >= M)
				continue;
			if (map[next.y][next.x] == 0)
				continue;
			tmp++;
			map[next.y][next.x] = 0;
			q.push(next);
		}
	}
	if (tmp > max_val)
		max_val = tmp;

}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	input();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 1){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt << '\n' << max_val;

	return 0;
}