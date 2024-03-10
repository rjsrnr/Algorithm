#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
	int num, cost;
};

struct cmp {
	bool operator() (point a, point b) {
		return a.cost > b.cost;
	}
};
vector<point> vec[20001];

int V, E, dist[20001];

void setdist() {
	for (int i = 1; i <= V; i++) {
		dist[i] = 21e8;
	}
}

void dijk(int st) {
	priority_queue<point, vector<point>, cmp> pq;
	pq.push({ st,0 });
	dist[st] = 0;
	while (!pq.empty()) {
		point now = pq.top();
		pq.pop();

		if (now.cost > dist[now.num])
			continue;

		for (int i = 0; i < vec[now.num].size(); i++) {
			point next = { 0 };
			next.cost = vec[now.num][i].cost + dist[now.num];
			next.num = vec[now.num][i].num;
			if (next.cost > dist[next.num])
				continue;
			pq.push(next);
			dist[next.num] = next.cost;
		}
	}


}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> V >> E;
	int st;
	cin >> st;

	setdist();

	for (int i = 0; i < E; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		vec[from].push_back({ to,cost });
	}

	dijk(st);
	for (int i = 1; i <= V; i++) {

		if (dist[i] != 21e8)
			cout << dist[i] << endl;
		else
			cout << "INF" << endl;
	}

	return 0;
}