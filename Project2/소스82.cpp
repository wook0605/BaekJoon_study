//1427 ��Ʈ�λ��̵�

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//��� 1 �������� �Լ� ���

//bool compare(int i, int j)
//{
//	return j < i;
//}
//
//int main()
//{
//	vector<int> vec;
//	string str;
//	int temp = 0;
//	cin >> str;
//	temp = stoi(str);
//	//���� �Է�
//	while (temp != 0)
//	{
//		vec.push_back(temp % 10);
//		temp /= 10;
//	}
//	sort(vec.begin(), vec.end(), compare);
//
//	for (auto iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter;
//	}
//}


//��� 2 reverse �Լ� ���

int main()
{
	vector<int> vec;
	string str;
	int temp = 0;
	cin >> str;
	temp = stoi(str);
	//���� �Է�
	while (temp > 0)
	{
		vec.push_back(temp % 10);
		temp /= 10;
	}
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		cout << *iter;
	}
}

//int main()
//{
//	string str;
//	cin >> str;
//	sort(str.begin(), str.end(), greater<char>());
//	cout << str;
//}