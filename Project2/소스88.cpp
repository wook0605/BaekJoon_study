// 2178 미로탐색
//최단거리 탐색 문제의 경우, BFS를 사용하는 것이 맞다. (DFS는 시간복잡도가 너무 크기때문에 불리함)
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int graph[101][101] = { 0, };
int row_size; //행 크기
int col_size; //열 크기
//상 하 좌 우
int dx[4] = { -1,1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void BFS(int x, int y)
{
	queue<pair<int, int>>q;
	q.push(pair<int, int>(x, y));

	while (!q.empty())
	{
		int qx = q.front().first;
		int qy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = qx + dx[i];
			int ny = qy + dy[i];

			if (nx < 0 || ny < 0 || nx > row_size || ny > col_size) continue;

			if (graph[nx][ny] == 1)
			{
				q.push(pair<int, int>(nx, ny));
				graph[nx][ny] = graph[qx][qy] + 1;
			}
		}
	}
	
}

int main()
{
	//입출력 속도 빠르게 하기 위한 부분
	ios::sync_with_stdio(false); //C/C++ 혼용하지않고 사용해야함
	cin.tie(NULL);

	int group_cnt = 0;
	cin >> row_size >> col_size;
	string str;

	for (int i = 0; i < row_size; i++) //행
	{
		cin >> str;
		for (int j = 0; j < col_size; j++) //열
		{
			graph[i][j] = str[j] - '0';
		}
	}

	BFS(0, 0);

	cout << graph[row_size - 1][col_size - 1];
}