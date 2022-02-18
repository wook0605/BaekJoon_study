//Quick_sort

#include <stdio.h>

void Quick_sort(int* arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = start; //������
    int st = start + 1;
    int ed = end;
    int temp;

    while (st <= ed) //�������� ���� �ݺ�
    {
        while (arr[st] <= arr[pivot]) //Ű ������ ū ���� ���� �� ����
        {
            st++;
        }
        while (arr[ed] >= arr[pivot] && ed > start) //Ű ������ ���� ���� ���� �� ����
        {
            ed--;
        }
        if (st > ed) //st�� ed���� ū ���� �� 
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

    Quick_sort(arr, start, ed - 1); //�߾ӱ��� ����
    Quick_sort(arr, ed + 1, end);//�߾� ���� ������
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