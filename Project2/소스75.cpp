// 세수 정렬
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
	array<int, 3> data = { 0,0,0 };
	for (int i = 0; i < data.size(); i++)
	{
		cin >> data.at(i);
	}

	sort(data.begin(), data.end());
	
	cout << data.at(0) << " " << data.at(1) << " " << data.at(2);
}