//1260 BFS, DFS
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool D_visit[1001];
bool B_visit[1001];

void DFS(int start)
{
	if (D_visit[start]) return; //방문한 정점에 왔을 때 중지
	D_visit[start] = true; //정점 방문처리
	cout << start << " ";

	for (int i = 0; i < graph[start].size(); i++)
	{
		int j = graph[start][i];
		DFS(j);
	}
}


void BFS(int start)
{
	queue<int> q;
	q.push(start);
	B_visit[start] = true; //정점 방문처리
	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		cout << x << " ";

		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];
			if (!B_visit[y]) //y정점에 방문하지 않았을 때
			{
				q.push(y);
				B_visit[y] = true; //정점 방문처리
			}
		}
	}


}

int main()
{
	int v_cnt = 0; //정점
	int e_cnt = 0; //간선 개수
	int start = 0; //시작 정점
	int edge = 0; //간선
	int v = 0;
	cin >> v_cnt >> e_cnt >> start;

	for (int i = 0; i < e_cnt; i++)
	{
		cin >> v >> edge;
		graph[v].push_back(edge);
		graph[edge].push_back(v);
	}
	//작은 정점부터 방문하도록 유도
	for (int i = 1; i <= v_cnt; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	DFS(start);
	cout << "\n";
	BFS(start);
}