//2667 단지번호붙이기
//주어진 2차원 배열을 그래프로 보고 사용해야하며, 정점간의 연결은 상, 하, 좌, 우 만을 고려해야함
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int graph[25][25];
bool D_visit[25][25] = { false, };
int cnt;
int map_size;
            //상 하 좌 우
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

vector<int> vec;

void DFS(int x, int y)
{
	if (D_visit[x][y]) return;
	D_visit[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= map_size || ny >= map_size) continue; //범위 확인

		if (graph[nx][ny] == 1) //정점이 존재할 때
		{
			DFS(nx, ny);
		}
	}
}


int main()
{
	//입출력 속도 빠르게 하기 위한 부분
	ios::sync_with_stdio(false); //C/C++ 혼용하지않고 사용해야함
	cin.tie(NULL);

	int group_cnt = 0;
	cin >> map_size;
	string str;

	for (int i = 0; i < map_size; i++)
	{
		cin >> str;
		for (int j = 0; j < map_size; j++)
		{
			graph[i][j] = str[j] - '0';
		}
	}

	for (int i = 0; i < map_size; i++)
	{
		for (int j = 0; j < map_size; j++)
		{
			if (graph[i][j] == 1 && !D_visit[i][j])
			{
				cnt = 0;
				DFS(i, j);
				group_cnt++;
				vec.push_back(cnt);
			}
		}
	}

	sort(vec.begin(), vec.end());
	cout << group_cnt << "\n";
	for (auto i : vec)
	{
		cout << i << "\n";
	}
}