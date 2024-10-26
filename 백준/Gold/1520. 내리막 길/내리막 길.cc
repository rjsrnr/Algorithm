#include <iostream>
#include <queue>

using namespace std;

struct point {
    int y, x;
    long long val;
};
struct cmp {
    bool operator() (point a, point b) {
        return a.val < b.val;
    }
};

int arr[501][501];
long long map[501][501];
int dy[] = { -1,1,0,0 }, dx[] = { 0,0,-1,1 };
priority_queue<point, vector<point>, cmp> pq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    map[0][0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int val;
            cin >> val;
            arr[i][j] = val;
            pq.push({ i,j,val });
        }
    }
    while (!pq.empty()) {
        point now = pq.top();
        pq.pop();

        for (int i = 0; i < 4; i++) {
            point next = { 0, };
            next.y = now.y + dy[i];
            next.x = now.x + dx[i];
            if (next.y >= N || next.x >= M || next.x < 0 || next.y < 0)
                continue;
            if (arr[now.y][now.x] >= arr[next.y][next.x])
                continue;
            map[now.y][now.x] += map[next.y][next.x];

        }
    }
    cout << map[N - 1][M - 1];
    return 0;

}