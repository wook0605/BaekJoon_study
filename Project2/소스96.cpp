#include <iostream> 
#include <queue>
#include <algorithm>
#define INT_MAX 2147483647

using namespace std;

vector<pair<int, int>> graph[20001]; // vector (정점, 거리)
int d[20001]; //최소 거리들

void dijkstra(int start)
{
	d[start] = 0;
	priority_queue<pair<int, int>>pq; //우선순위 큐 (정점 , 거리) 가까운 순서대로 BFS를 사용하기 위해서

	pq.push(make_pair(0, start)); //시작정점과 자기자신의 거리

	while (!pq.empty())
	{
		int cur = pq.top().second; //현재 정점
		int dis = -pq.top().first; // 거리 (짧은 것이 먼저 오도록 음수화한다.)
		pq.pop();
		//최단거리가 아닌 경우 스킵
		if (d[cur] < dis) continue;

		for (int i = 0; i < graph[cur].size(); i++)
		{
			//선택 노드의 인접 노드
			int next = graph[cur][i].second;
			//선택 노드를 거쳐 다음 노드로 가는 비용
			int next_dis = dis + graph[cur][i].first;
			if (next_dis < d[next])
			{
				d[next] = next_dis;
				pq.push(make_pair(-next_dis, next));
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V, E, start, u, v, w;
	cin >> V >> E;
	cin >> start;
	fill(d, d + V + 1, INT_MAX);

	for (int i = 1; i <= E; i++)
	{
		cin >> u >> v >> w;
		graph[u].push_back(make_pair(w, v));
	}

	dijkstra(start);

	for (int i = 1; i <= V; i++)
	{
		if (d[i] == INT_MAX) cout << "INF" << "\n";
		else cout << d[i] << "\n";

	}
}