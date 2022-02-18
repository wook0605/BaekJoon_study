//� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
//���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
//N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool detect_artseq(int number)
{
	vector<int>temp;
	int ntemp = number;
	int ntemp_1 = number;
	int i = 1;
	while (ntemp_1!=0)
	{
		ntemp_1 /= 10;
		if (ntemp_1 != 0) i++;
		
	}
	
	while (i != 0)
	{
		temp.push_back(ntemp % 10);
		ntemp = ntemp / 10;
		i--;
	}
	reverse(temp.begin(), temp.end());
	if (temp.size() < 3) return true; //1�ڸ� �� �϶�
	if (temp[0] - temp[1] == temp[1] - temp[2]) //�Ѽ��� ��
	{
		return true;
	}
	else return false;
}

int main()
{
	vector<bool>seq;
	int num_range = 0;
	int count = 0;

	while (true)
	{
		cin >> num_range;
		if (num_range < 1001) break;
	}
	seq.assign(num_range+1, true);
	for (int i = 1; i <= num_range; i++)
	{
		seq[i] = detect_artseq(i);
		if (seq[i] == true)
		{
			count++;
		}
			
	}

	cout << count;

}