//퀵 정렬 알고리즘

#include <stdio.h>

void quick_sort(int list[], int left, int right)
{
	if (left >= right) return;
	int pivot = left, start = left + 1, end = right, temp = 0;
	while (start <= end)
	{
		while (start <= end && list[start] <= list[pivot])
		{
			start++;
		}
		while (end>=start && list[end] >=list[pivot])
		{
			end--;
		}
		if (start > end) //인덱스가 엇갈렸을 때 (pivot 보다 큰 값이 end 인덱스까지 발견되지 않을 경우)
		{
			temp = list[end];
			list[end] = list[pivot];
			list[pivot] = temp;
		}
		else
		{
			temp = list[start];
			list[start] = list[end];
			list[end] = temp;
		}
	}
	quick_sort(list, left, end - 1);
	quick_sort(list, end + 1, right);
}

int main()
{
	int list[] = { 37, 10, 22, 30, 35, 13, 25, 24 };
	int size = (sizeof(list) / sizeof(int));
	quick_sort(list, 0, size-1);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
}