//합병정렬 알고리즘
#include <stdio.h>
#include <stdlib.h>

void MergeSort(int list[], int left, int right, int tmp[]);
void Merge(int list[], int left, int mid, int right, int tmp[]);

void MergeSort(int list[], int left, int right, int tmp[])
{
	int middle = 0;
	if (left < right)
	{
		middle = (left + right) / 2;
		//분할
		MergeSort(list, left, middle, tmp); //앞부분 
		MergeSort(list, middle + 1, right, tmp); //뒷부분
		//병합
		Merge(list, left, middle, right, tmp); 
	}
}

void Merge(int list[], int left, int mid, int right, int tmp[])
{
	int left_part = left, right_part = mid + 1, middle = mid, index = left;

	// 분할 정렬된 list의 합병
	while (left_part <= middle && right_part <= right)
	{

		if (list[left_part] <= list[right_part])
		{
			tmp[index++] = list[left_part++];
		}
		else if (list[left_part] > list[right_part])
		{
			tmp[index++] = list[right_part++];
		}
	}

	//남아있는 값의 복사

	if (left_part > mid)
	{
		for (int i = right_part; i <= right; i++)
		{
			tmp[index++] = list[i];
		}
	}
	else
	{
		for (int i = left_part; i <= middle; i++)
		{
			tmp[index++] = list[i];
		}
	}
	for (int i = left; i <= right; i++)
	{
		list[i] = tmp[i];
		printf("%d\n", list[i]);
	}
	printf("\n");
}
int main()
{
	int A[] = { 37, 10, 22, 30, 35, 13, 25, 24 };
	int* tmp = (int*)malloc(sizeof(int) * (sizeof(A) / sizeof(int)));
	MergeSort(A, 0, (sizeof(A) / sizeof(int))-1, tmp);
	for (int i = 0; i< (sizeof(A) / sizeof(int)); i++)
	{
		printf("%d\n", A[i]);
	}
}
