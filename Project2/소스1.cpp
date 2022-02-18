//����2) � �ڿ��� n�� ���� ��, d(n)�� n�� �� �ڸ��� ���ڵ�� n �ڽ��� ���� ���ڶ�� ��������.
//���� ��� d(91) = 9 + 1 + 91 = 101
//�� ��, n�� d(n)�� ���׷�����(generator)��� �Ѵ�.���� ������ 91�� 101�� ���׷������̴�.
//� ���ڵ��� �ϳ� �̻��� ���׷����͸� ������ �ִµ�, 101�� ���׷����ʹ� 91 �� �ƴ϶� 100�� �ִ�.�׷��� �ݴ��, ���׷����Ͱ� ���� ���ڵ鵵 ������,
//�̷� ���ڸ� �ε��� ������ Kaprekar�� ���� �ѹ�(self - number)�� �̸� �ٿ���.���� ��� 1, 3, 5, 7, 9, 20, 31 �� ���� �ѹ� ���̴�.
//1 �̻��̰� 5000 ���� ���� ��� ���� �ѹ����� ���� ���϶�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dn(int i)
{
	int sum = i;
	do
	{
		sum += i % 10;
	} while ((i/=10)!=0);
	return sum;
}

int main()
{
	vector<bool>self_number(10000);
	int sum = 0;
	self_number.assign(self_number.size(), true);
	for (int i = 1; i < 10001; i++)
	{
		for (int j = 1; j < 10001; j++)
		{
			if (i == dn(j))
			{
				self_number[i - 1] = false;
				break;
			}
		}
		
	}

	for (int i = 0; i < self_number.size(); i++)
	{
		if (self_number[i] == true)
		{
			cout << i + 1 << endl;
			sum += i+1;
		}
		
	}

	/*cout << sum << endl;*/
}