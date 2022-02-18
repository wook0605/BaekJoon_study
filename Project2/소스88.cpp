// 2178 �̷�Ž��
//�ִܰŸ� Ž�� ������ ���, BFS�� ����ϴ� ���� �´�. (DFS�� �ð����⵵�� �ʹ� ũ�⶧���� �Ҹ���)
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int graph[101][101] = { 0, };
int row_size; //�� ũ��
int col_size; //�� ũ��
//�� �� �� ��
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
	//����� �ӵ� ������ �ϱ� ���� �κ�
	ios::sync_with_stdio(false); //C/C++ ȥ�������ʰ� ����ؾ���
	cin.tie(NULL);

	int group_cnt = 0;
	cin >> row_size >> col_size;
	string str;

	for (int i = 0; i < row_size; i++) //��
	{
		cin >> str;
		for (int j = 0; j < col_size; j++) //��
		{
			graph[i][j] = str[j] - '0';
		}
	}

	BFS(0, 0);

	cout << graph[row_size - 1][col_size - 1];
}