#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Binary_Search_rt_idx(vector<int> vec, int search_value)
{
	int mid = vec.size() / 2; //ex 3.5 => 3���� ������ ��

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
	for (auto& elem : vec) //range ��� for��
	{
		cout << elem << "\t";
	}
	cout <<"\n"<< search << "��/��" << Binary_Search_rt_idx(vec, search) << "��° �ε����� �ֽ��ϴ�.\n";
}