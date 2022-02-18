// 1654 �����ڸ��� (�̺�Ž��, �Ű����� Ž��)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long count = 0, need = 0, temp = 0, low = 1, high = 0, mid = 0, result = 0, cnt = 0;
	vector <long long > cable;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> count >> need;
	for (int i = 0; i < count; i++)
	{
		cin >> temp;
		cable.push_back(temp);
		high = max(high, cable[i]); //�ִ밪
	}

	while (low <= high) //�̺�Ž��
	{
		mid = ((low + high) / 2);
		cnt = 0;
		for (int i = 0; i < count; i++)
		{
			cnt += (cable[i] / mid);
		}
		if (cnt < need) //���� ������ �ʿ� �������� ������
		{
			high = mid - 1;
		}
		else //���� ������ �ʿ� �������� ũ�ų� ������
		{
			low = mid + 1;
			if (result < mid)
			{
				result = mid;
			}
			else
			{
				result = result;
			}
		}
	}
	cout << result;
}