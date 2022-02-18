//선택문제 알고리즘 (Selection) k번째 작은 수

#include <stdio.h>


int Selection(int list[], int left, int right, int k)
{
	int pivot_index = (left + right) / 2;
	int pivot = list[pivot_index]; // 0 ~ right까지
	int temp = 0, size = 0, start = left + 1, end = right;
	
	temp = list[left];
	list[left] = list[pivot_index];
	list[pivot_index] = temp;

	while(start <= end) // 퀵정렬
	{
		while (start<=end && list[start] <= list[left])
		{
			start++;
		}
		while (end>=start && list[end] >= list[left])
		{
			end--;
		}

		if (start > end)
		{
			temp = list[end];
			list[end] = list[left];
			list[left] = temp;
		}
		else
		{
			temp = list[start];
			list[start] = list[end];
			list[end] = temp;
		}
	}
	
	size = (pivot_index - 1) - left + 1;
	if (k <= size) Selection(list, left, pivot_index - 1, k);
	else if (k == size + 1) return list[pivot_index];
	else Selection(list, pivot_index + 1, right, k - size - 1);
}

int main()
{
	int list[] = { 37, 10, 22, 30, 35, 13, 25, 24 }, arr_size = (sizeof(list) / sizeof(int));
	printf("%d\n", Selection(list, 0, arr_size - 1, 3));
	for (int i = 0; i < arr_size; i++)
	{
		printf("arr[%d] = %d\n", i, list[i]);
	}
}