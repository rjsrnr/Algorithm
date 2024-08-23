#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
	int num, cost;
};

struct cmp {
	bool operator () (point a, point b) {
		return a.cost > b.cost;
	}
};

vector<point> v[1001];
int N, M;

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		v[from].push_back({ to,cost });
	}
	int st, ed;
	cin >> st >> ed;
	int dist[1001];
	for (int i = 1; i <= N; i++) 
		dist[i] = 21e8;

	priority_queue<point, vector<point>, cmp> pq;
	pq.push({ st,0 });
	dist[st] = 0;
	while (!pq.empty()) {
		point now = pq.top();
		pq.pop();

		if (now.cost > dist[now.num])
			continue;

		for (int i = 0; i < v[now.num].size(); i++) {
			int next_cost = now.cost + v[now.num][i].cost;
			if (next_cost >= dist[v[now.num][i].num])
				continue;

			pq.push({ v[now.num][i].num, next_cost });
			dist[v[now.num][i].num] = next_cost;
		}
	}
	cout << dist[ed];

}