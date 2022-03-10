#include <iostream> 
#include <queue>
#include <algorithm>
#define INT_MAX 2147483647

using namespace std;

vector<pair<int, int>> graph[20001]; // vector (����, �Ÿ�)
int d[20001]; //�ּ� �Ÿ���

void dijkstra(int start)
{
	d[start] = 0;
	priority_queue<pair<int, int>>pq; //�켱���� ť (���� , �Ÿ�) ����� ������� BFS�� ����ϱ� ���ؼ�

	pq.push(make_pair(0, start)); //���������� �ڱ��ڽ��� �Ÿ�

	while (!pq.empty())
	{
		int cur = pq.top().second; //���� ����
		int dis = -pq.top().first; // �Ÿ� (ª�� ���� ���� ������ ����ȭ�Ѵ�.)
		pq.pop();
		//�ִܰŸ��� �ƴ� ��� ��ŵ
		if (d[cur] < dis) continue;

		for (int i = 0; i < graph[cur].size(); i++)
		{
			//���� ����� ���� ���
			int next = graph[cur][i].second;
			//���� ��带 ���� ���� ���� ���� ���
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