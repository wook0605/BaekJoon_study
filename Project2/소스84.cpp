#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string S; //���ڿ�
	int N = 0; //��� �Է¹���������
	vector<int> alpha(26, -1); //���ĺ� (-1�� �ʱ�ȭ���ذ�)
	int pos = 0, count = 0; //pos = ��ġ , count�� ���״�� �׷�ܾ��� ����
	bool check = false; //check�� �׷�ܾ����� üũ�ϴ°�
	cin >> N;
	for (int i = 0; i < N; i++) //�� N�� �ݺ��Ѵ�.
	{
		check = false; 
		cin >> S; //���ڿ��� �Է¹޴´�.
		for (int j = 'a'; j <= 'z'; j++) // a -> z�� �����ϱ� ������
		{
			alpha[j % 'a'] = S.find_first_of(j); //��ó������ ã������ ��ġ
			pos = S.rfind(j); //rfind -> reversefind�� ���Ӹ� ->�Ųٷο��� ó������ ã������ ��ġ
			if (pos > 0)
			{
				for (int k = alpha[j % 'a']; k <= pos; k++)
				{
					if (S[k] != j) //alpha�� ����Ǿ��ִ� ��ó�� ��ġ, pos �������� ������ ��ġ�� ����Ǿ������ϱ�
					{
						check = true;
						break;
					}
				}
				if (check) break;
			}
		}
		if (!check) count++;
	}
	cout << count;

}