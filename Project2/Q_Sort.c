//Quick_sort

#include <stdio.h>

void Quick_sort(int* arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = start; //기준점
    int st = start + 1;
    int ed = end;
    int temp;

    while (st <= ed) //엇갈릴때 까지 반복
    {
        while (arr[st] <= arr[pivot]) //키 값보다 큰 값을 만날 때 까지
        {
            st++;
        }
        while (arr[ed] >= arr[pivot] && ed > start) //키 값보다 작은 값을 만날 때 까지
        {
            ed--;
        }
        if (st > ed) //st가 ed보다 큰 값일 때 
        {
            temp = arr[ed];
            arr[ed] = arr[pivot];
            arr[pivot] = temp;
        }
        else
        {
            temp = arr[ed];
            arr[ed] = arr[st];
            arr[st] = temp;
        }
    }

    Quick_sort(arr, start, ed - 1); //중앙기점 왼쪽
    Quick_sort(arr, ed + 1, end);//중앙 기준 오른쪽
}


int main()
{
    int array[10] = { 1,10,5,8,7,6,4,3,2,9 }, size = 0;
    size = sizeof(array) / sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    Quick_sort(array, 0, size - 1);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
}