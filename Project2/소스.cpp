//���ڿ� �� � ���ĺ��� ���� ���� ���԰�, ���� Ƚ���� ������ ����Ͻÿ� (ASCII CODE A : 65 Z : 90)
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string text;
	cin >> text;
	vector<int> count(26);
	char alpha = NULL;
	int max = 0;
	transform(text.begin(), text.end(), text.begin(), ::towupper);
	sort(text.begin(), text.end());
	for (int i = 0; i < text.size(); i++)
	{
		for (int j = 65; j < 91; j++)
		{
			if (text.at(i) == j)
			{
				count[j - 65]++;
				break;
			}
		}
	}
	max = max_element(count.begin(), count.end()) - count.begin();
	alpha = max + 65;
	cout << "���� ���̳��� ���ĺ���" << alpha << "��, ��" << count[max] << "ȸ ����\n";
}