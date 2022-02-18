//1018 체스판 다시 칠하기
#include <iostream>
#include <vector>
using namespace std;

void input(vector<vector<char>>&chess_plate, int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cin >> chess_plate[i][j];
		}
	}
}

int main()
{
	int height = 0, width = 0, min = 100;
	vector<vector<char>>WB = { {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',} };
	vector<vector<char>>BW = { {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',},
							   {'B','W','B','W','B','W','B','W',},
							   {'W','B','W','B','W','B','W','B',} };
	cin >> height >> width;
	int count[2] = { 0, };
	vector<vector<char>>chess_plate(height, vector<char>(width));
	char color[2];
	input(chess_plate, height, width);
	for (int i = 0; i + 8 <= height; i++)
	{
		for (int j = 0; j + 8 <= width; j++)
		{
			for (int x = 0; x < 8; x++)
			{
				for (int y = 0; y < 8; y++)
				{
					if (chess_plate[i + x][j + y] != WB[x][y]) count[0]++;
					if (chess_plate[i + x][j + y] != BW[x][y]) count[1]++;
				}
			}
			if (count[0] < count[1])
			{
				if (min > count[0]) min = count[0];
			}
			else
			{
				if (min > count[1]) min = count[1];
			}
			count[0] = 0;
			count[1] = 0;
		}
	}
	cout << min;
}