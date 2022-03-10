// 1012 ����� ����
// DFS ���
#include <iostream>
#include <cstring>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0,0,-1,1 };
int map[51][51];
bool visit_map[51][51];
int T, N, M, K, X, Y;
void DFS(int x, int y)
{
	if (visit_map[x][y]) return;
	visit_map[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx > N || ny > M) continue; //������ ����� ����
		if (map[nx][ny] == 1) DFS(nx, ny); //������ �����ϸ� DFS ����
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T; //TestCase�� ����
	for (int i = 0; i < T; i++)
	{
		int cnt = 0;
		cin >> M >> N >> K;  //����, ����, ������ ����
		for (int j = 0; j < K; j++) //������ ��ġ ǥ��
		{
			cin >> X >> Y;
			map[Y][X] = 1;
		}

		//��ȸ
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1 && visit_map[i][j] == false) //������ �����ϸ鼭 �湮���� �ʾ��� ��
				{
					DFS(i, j);
					cnt++;
				}
			}
		}
		memset(map, 0, sizeof(map));
		memset(visit_map, 0, sizeof(visit_map));
		cout << cnt << "\n";
	}

}
