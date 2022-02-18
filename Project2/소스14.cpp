//배낭 문제 (동적프로그래밍 활용해보기)
#include <stdio.h>
#include <stdlib.h>
#define MAX_WEIGHT 100000

int main()
{
	int things_count = 0, carry_weight = 0, * things;

	while (true)
	{
		scanf("%d %d", things_count, carry_weight);
		if (things_count > 0 && things_count < 101 && carry_weight > 0 && carry_weight <= MAX_WEIGHT) break;
	}
	things = (int*)malloc(sizeof(int) * things_count);
	things = (int*)malloc(sizeof(int) * MAX_WEIGHT);

	for (int i = 0; i < things_count; i++)
	{
		for (int j = 0; j < MAX_WEIGHT; j++)
		{

		}
	}
}