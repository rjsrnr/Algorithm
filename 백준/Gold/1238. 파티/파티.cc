#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct point {
	int num, cost;
};

struct cmp {
	bool operator() (point a, point b) {
		return a.cost > b.cost;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X, M;
	cin >> N >> M >> X;

	vector<point> v_st[1001], v_ed[1001];

	for (int i = 0; i < M; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		v_st[from].push_back({ to,cost });
		v_ed[to].push_back({ from,cost });
	}

	int dist_st[1001], dist_ed[1001];
	for (int i = 1; i <= N; i++) {
		dist_st[i] = dist_ed[i] = 21e8;
	}
	dist_st[X] = dist_ed[X] = 0;
	priority_queue<point, vector<point>, cmp> pq_st, pq_ed;
	pq_st.push({ X,0 });
	pq_ed.push({ X,0 });

	while (!pq_st.empty()) {
		point now = pq_st.top();
		pq_st.pop();

		if (now.cost > dist_st[now.num])
			continue;

		for (int i = 0; i < v_st[now.num].size(); i++) {
			int next_cost = v_st[now.num][i].cost + dist_st[now.num];
			if (next_cost >= dist_st[v_st[now.num][i].num])
				continue;
			pq_st.push({ v_st[now.num][i].num, next_cost });
			dist_st[v_st[now.num][i].num] = next_cost;
		}
	}
	while (!pq_ed.empty()) {
		point now = pq_ed.top();
		pq_ed.pop();

		if (now.cost > dist_ed[now.num])
			continue;

		for (int i = 0; i < v_ed[now.num].size(); i++) {
			int next_cost = v_ed[now.num][i].cost + dist_ed[now.num];
			if (next_cost >= dist_ed[v_ed[now.num][i].num])
				continue;
			pq_ed.push({ v_ed[now.num][i].num, next_cost });
			dist_ed[v_ed[now.num][i].num] = next_cost;
		}
	}

	int result = 0;
	for (int i = 1; i <= N; i++) {
		int tmp = 0;
		tmp += dist_st[i] + dist_ed[i];

		result = max(result, tmp);
	}

	cout << result;

	return 0;

}