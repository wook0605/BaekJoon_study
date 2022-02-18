//2606 바이러스

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[101];
bool B_visit[101];
bool D_visit[101];
int count;

void BFS(int start)
{
	queue<int> q;
	int count = 0;
	q.push(start);
	B_visit[start] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];
			if (!B_visit[y]) //정점에 방문하지 않았을 때
			{
				count++;
				q.push(y);
				B_visit[y] = true;
			}
		}
	}
	cout << count;
}

int main()
{
	int v_cnt, e_cnt, v, e;
	cin >> v_cnt >> e_cnt;



	for (int i = 1; i <= e_cnt; i++)
	{
		cin >> v >> e;
		graph[v].push_back(e);
		graph[e].push_back(v);
	}
	BFS(1);
}