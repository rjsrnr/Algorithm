#include <iostream>
#include <algorithm>

using namespace std;

struct point {
	int r_y, r_x;
	int b_y, b_x;
};
struct point2 {
	int y, x;
};

int dy[] = { -1,1,0,0 }, dx[] = { 0,0,-1,1 };

point ball;
point2 goal;

int N, M, result = 21e8;
int map[11][11];

point2 mv(point2 tmp,int dir, point now_ball) {
	while (1) {
		point2 next = { 0, };
		next.y = tmp.y + dy[dir];
		next.x = tmp.x + dx[dir];
		if (next.y == goal.y && next.x == goal.x) {
			tmp = goal;
			break;
		}
		if ((next.y == now_ball.r_y && next.x == now_ball.r_x) || (next.y == now_ball.b_y && next.x == now_ball.b_x))
			break;
		if (map[next.y][next.x] == -1)
			break;
		tmp = next;

	}
	return tmp;
}

point grav(point now_ball, int dir) {
	if (dir == 0) {
		for (int i = 1; i < M - 1; i++) {
			for (int j = 1; j < N - 1; j++) {
				point2 tmp = { 0, };
				if ( now_ball.b_y == j && now_ball.b_x == i) {
					tmp = { now_ball.b_y, now_ball.b_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.b_y = tmp.y, now_ball.b_x = tmp.x;
				}
				else if (now_ball.r_y == j && now_ball.r_x == i){
					tmp = { now_ball.r_y, now_ball.r_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.r_y = tmp.y, now_ball.r_x = tmp.x;
				}
			}
		}
	}
	else if (dir == 1) {
		for (int i = 1; i < M - 1; i++) {
			for (int j = N - 2; j > 0; j--) {
				point2 tmp = { 0, };
				if (now_ball.b_y == j && now_ball.b_x == i ) {
					tmp = { now_ball.b_y, now_ball.b_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.b_y = tmp.y, now_ball.b_x = tmp.x;
				}
				else if (now_ball.r_y == j && now_ball.r_x == i) {
					tmp = { now_ball.r_y, now_ball.r_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.r_y = tmp.y, now_ball.r_x = tmp.x;
				}
			}
		}

	}
	else if (dir == 2) {
		for (int i = 1; i < N - 1; i++) {
			for (int j = 1; j <  M - 1; j++) {
				point2 tmp = { 0, };
				if (now_ball.b_y == i && now_ball.b_x == j) {
					tmp = { now_ball.b_y, now_ball.b_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.b_y = tmp.y, now_ball.b_x = tmp.x;
				}
				else if (now_ball.r_y == i && now_ball.r_x == j) {
					tmp = { now_ball.r_y, now_ball.r_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.r_y = tmp.y, now_ball.r_x = tmp.x;
				}
			}
		}

	}
	else if (dir == 3) {
		for (int i = 1; i < N - 1; i++) {
			for (int j = M - 2; j > 0; j--) {
				point2 tmp = { 0, };
				if (now_ball.b_y == i && now_ball.b_x == j) {
					tmp = { now_ball.b_y, now_ball.b_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.b_y = tmp.y, now_ball.b_x = tmp.x;
				}
				else if (now_ball.r_y == i && now_ball.r_x == j) {
					tmp = { now_ball.r_y, now_ball.r_x };
					tmp = mv(tmp, dir, now_ball);
					now_ball.r_y = tmp.y, now_ball.r_x = tmp.x;
				}
			}
		}
	}

	return now_ball;
}

void solve(point now_ball, int cnt) {
	if (cnt > 10)
		return;
	if (now_ball.r_y == goal.y && now_ball.r_x == goal.x) {
		result = min(cnt, result);
		return;
	}

	for (int i = 0; i < 4; i++) {
		point tmp = grav(now_ball, i);
		if (tmp.b_y == goal.y && tmp.b_x == goal.x)
			continue;
		if (tmp.b_y == now_ball.b_y && tmp.b_x == now_ball.b_x && tmp.r_y == now_ball.r_y && tmp.r_x == now_ball.r_x)
			continue;
		if (tmp.b_y == tmp.r_y && tmp.b_x == tmp.r_x)
			continue;
		solve(tmp, cnt + 1);

	}


}

void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char tmp;
			cin >> tmp;
			if (tmp == '.')
				map[i][j] = 0;
			else if (tmp == 'B')
				ball.b_y = i, ball.b_x = j;
			else if (tmp == 'R')
				ball.r_y = i, ball.r_x = j;
			else if (tmp == 'O')
				goal.y = i, goal.x = j;
			else
				map[i][j] = -1;
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	input();
	point st_ball;
	st_ball = ball;
	solve(st_ball, 0);

	if (result == 21e8)
		cout << -1;
	else
		cout << result;

	return 0;

}
