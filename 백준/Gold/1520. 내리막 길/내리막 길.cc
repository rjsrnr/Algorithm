#include <iostream>

using namespace std;

struct point {
    int y, x;
};

int N, M;
int map[501][501], dp[501][501], dy[] = { -1,1,0,0 }, dx[] = { 0,0,-1,1 };
int visited[501][501];

int solve(point now) {
    if (now.y == N - 1 && now.x == M - 1)
        return 1;
    if (visited[now.y][now.x] == 0) {
        visited[now.y][now.x] = 1;

        for (int i = 0; i < 4; i++) {
            point next = { 0, };
            next.y = now.y + dy[i];
            next.x = now.x + dx[i];
            if (map[now.y][now.x] <= map[next.y][next.x])
                continue;
            if (next.y < 0 || next.x < 0 || next.y >= N || next.x >= M)
                continue;
            dp[now.y][now.x] += solve(next);
        }
    }
    return dp[now.y][now.x];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }
    cout << solve({ 0,0 });

    return 0;
}