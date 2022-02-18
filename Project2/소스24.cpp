//최근접 점의 쌍 찾기

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point
{
	int x;
	int y;
}Point;

void quick_sort(Point* list, int left, int right); //퀵정렬
double ClosetPair(Point* point, int start, int end, int point_num); // 최근접 점 쌍 찾기
double distance(Point* point_a, Point* point_b); //거리 찾는 함수
double min_num(double point_a, double point_b); //최소값 찾는 함수

double min_num(double point_a, double point_b)
{
	double min = point_a < point_b ? point_a : point_b;
	return min;
}

void quick_sort(Point* list, int left, int right)
{
	if (left >= right) return;
	int pivot = left, start = left + 1, end = right;
	Point temp = { 0, };
	while (start <= end)
	{
		while (start <= end && (list+start)->x <= (list+start)->x)
		{
			start++;
		}
		while (end >= start && (list+end)->x >= (list+pivot)->x)
		{
			end--;
		}
		if (start > end) //인덱스가 엇갈렸을 때 (pivot 보다 큰 값이 end 인덱스까지 발견되지 않을 경우)
		{
			temp.x = (list + end)->x;
			temp.y = (list + end)->y;
			(list + end)->x = (list + pivot)->x;
			(list + end)->y = (list + pivot)->y;
			(list + pivot)->x = temp.x;
			(list + pivot)->y = temp.y;
		}
		else
		{
			temp.x = (list + start)->x;
			temp.y = (list + start)->y;
			(list + start)->x = (list + end)->x;
			(list + start)->y = (list + end)->y;
			(list + end)->x = temp.x;
			(list + end)->y = temp.y;
		}
	}
	quick_sort(list, left, end - 1);
	quick_sort(list, end + 1, right);
}

double distance(Point* point_a, Point* point_b)
{
	double dist = 0.0;
	dist = sqrt(pow(point_a->x - point_b->x, 2) + pow(point_a->y - point_b->y, 2)); //거리 구하기 
	return dist;
}

double ClosetPair(Point* point,int start, int end, int point_num)
{
	int mid = (0 + point_num) / 2;
	int left_start = start, right_start = mid + 1;
	double distance_range = 0, CPright = 0, CPleft = 0, min = 0;
	if (point_num == 2) return distance((point + start), (point + end));
	else if (point_num == 3)
	{
		double* dist = (double*)malloc(sizeof(double) * point_num);
		for (int i = 0; i<point_num; i++)
		{
			dist[i] = distance((point + i), (point + ((i + 1) % point_num)));
		}
		for (int i = 0; i < point_num; i++)
		{
			min = min_num(dist[i], dist[(i + 1) % point_num]);
		}
		return min;
		
	}
	if (point_num % 2 != 0) //홀수일 경우
	{
		CPleft = ClosetPair(point, left_start, mid+1, (mid+1)-left_start); //왼쪽
		CPright = ClosetPair(point, right_start + 1, end, (end - right_start + 1)); //오른쪽
		distance_range = min_num(CPleft, CPright);
		
		printf("CPleft : %lf\n", CPleft);
		printf("CPright : %lf\n", CPright);
		
		Point* temp = (Point*)malloc(sizeof(Point) * point_num);

		for (int i = start; i <= end; i++)
		{
			
		}
	}
	else
	{
		CPleft = ClosetPair(point, left_start, mid, mid);
		CPright = ClosetPair(point, right_start, point_num, point_num);
		distance_range = min_num(CPleft, CPright);
	}

}

int main()
{
	Point* point;
	int point_num = 0;
	scanf("%d", &point_num);
	point = (Point*)malloc(sizeof(Point) * point_num);
	for (int i = 0; i < point_num; i++)
	{
		scanf("%d" "%d", &(point + i)->x, &(point + i)->y);
	}
	quick_sort(point, 0, point_num - 1);

}