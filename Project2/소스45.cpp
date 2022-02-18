//11650 좌표 정렬하기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct point
{
	int x;
	int y;
}ptr;

bool cmp(ptr a, ptr b)
{
	if (a.x == b.x && a.y < b.y) return a.y < b.y;
	else return a.x < b.x;
}

int main()
{
	int N = 0;
	cin >> N;
	vector<ptr>PTR;
	ptr ptr;
	for (int i = 0; i < N; i++)
	{
		cin >> ptr.x >> ptr.y;
		PTR.push_back(ptr);
	}

	sort(PTR.begin(), PTR.end(), cmp);

	for (int i = 0; i < PTR.size(); i++)
	{
		cout << PTR[i].x << " " << PTR[i].y << "\n";
	}
}