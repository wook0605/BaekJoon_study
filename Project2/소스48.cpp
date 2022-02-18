//10814 나이순 정렬
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct
{
	int age;
	string name;
	int count;
}info;


bool cmp(info a, info b)
{
	if (a.age == b.age) return a.count < b.count;
	else return a.age < b.age;
}

int main()
{
	info s;
	int N = 0, age = 0;
	cin >> N;
	vector<info>arr;

	for (int i = 0; i < N; i++)
	{
		cin >> s.age >> s.name;
		arr.push_back(s);
		arr[i].count = i;
	}
	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i].age << " " << arr[i].name << "\n";
	}
}