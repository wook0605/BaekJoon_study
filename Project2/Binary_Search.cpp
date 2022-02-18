#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Binary_Search_rt_idx(vector<int> vec, int search_value)
{
	int mid = vec.size() / 2; //ex 3.5 => 3으로 변수에 들어감

	while (true)
	{
		if (vec[mid] == search_value)
		{
			return mid;
		}
		if (search_value > vec[mid])
		{
			mid = (mid + vec.size()) / 2;
		}
		else if (search_value < vec[mid])
		{
			mid /= 2;
		}
	}
}

int main()
{
	vector<int> vec = { 9,6,8,2,3,7,5 };
	int search = 8;
	sort(vec.begin(), vec.end());
	for (auto& elem : vec) //range 기반 for문
	{
		cout << elem << "\t";
	}
	cout <<"\n"<< search << "은/는" << Binary_Search_rt_idx(vec, search) << "번째 인덱스에 있습니다.\n";
}