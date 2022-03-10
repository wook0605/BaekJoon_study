// 1012 유기농 배추
// DFS 사용
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
		if (nx < 0 || ny < 0 || nx > N || ny > M) continue; //범위를 벗어나면 생략
		if (map[nx][ny] == 1) DFS(nx, ny); //정점이 존재하면 DFS 실행
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T; //TestCase의 개수
	for (int i = 0; i < T; i++)
	{
		int cnt = 0;
		cin >> M >> N >> K;  //가로, 세로, 배추의 개수
		for (int j = 0; j < K; j++) //배추의 위치 표시
		{
			cin >> X >> Y;
			map[Y][X] = 1;
		}

		//순회
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1 && visit_map[i][j] == false) //정점이 존재하면서 방문하지 않았을 때
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
