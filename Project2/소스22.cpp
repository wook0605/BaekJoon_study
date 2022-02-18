//https://www.acmicpc.net/problem/9376 Ż�� (��Ǯ����)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void create_map(int height, int width, char** map)
{
	map = (char**)malloc(sizeof(char*) * height);
	for (int i = 0; i < height; i++)
	{
		map[i] = (char*)malloc(sizeof(char) * width);
		memset(map[i], NULL, sizeof(char) * width);
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			scanf("%c", &map[i][j]);
		}
	}
	system("cls");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("%c", map[i][j]);
		}
	}
}

int find_minimum(char* info, char** map, int height, int width, int prisoner)
{
	int val = 0, loc_h = 0, loc_w = 0;
	bool escape = false;
	while (prisoner >0 && escape)
	{
		while (map[loc_h][loc_w] != info[2]) //�� �Ա� ã��
		{
			loc_w++;
		}
		if (map[loc_h][loc_w] == info[0]) //����� �߰�
		{
			while (map[loc_h][loc_w - 1] == info[0] || map[loc_h][loc_w - 1] == info[2] || map[loc_h][loc_w - 1] || info[3]) //��
			{
				if (map[loc_h][loc_w - 1] == info[0] || map[loc_h][loc_w - 1] == info[2]) //����� Ȥ�� �� �߰�
				{
					loc_w--;
				}
				else if (map[loc_h][loc_w - 1] == info[2]) //�� �߰�
				{
					loc_w--;
				}
			}
		}
		else if (map[loc_h][loc_w] == info[1]) //������ �� ���� �� �߰�
		{

		}
		else if (map[loc_h][loc_w] == info[2]) // �� �߰�
		{
			if (map[loc_h + 1][loc_w] != info[1]) //���� ��ĭ �Ʒ��� ������ �� ���� ���� �ƴ� ��
			{
				//if (map[loc_h + 1][loc_w])
			}
		}
		else //�˼� �߰�
		{
			prisoner--;
		}
	}	
}

int main()
{
	int test_case = 0, width = 0, height = 0, result = 0, prisoner = 2; char** map = NULL, info[4] = { '.', '*', '#', '$' };
	
	do
	{
		scanf("%d", &test_case);
	} while (test_case >100);

	for (int i = 0; i < test_case; i++)
	{
		do
		{
			scanf("%d %d", &height, &width);
		} while (height<2 && height > 100 && width < 2 && width>100);
		create_map(height, width, map);

	}

}