#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string str = ""; //���ڿ� ���� ����
	vector<int> alpha(26); //���ĺ� ���� ���� ����
	char result = 'a'; //���������� ��� �Ұ��ؼ� ����ϴ� ĳ������ ����
	cin >> str; //���ڿ� �Է� �ް�
	//baaa
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]); //�빮�ڷ� ���� -> b-> B str[0] = B ���۰��� 
		alpha[str[i] % 65]++; //alpha ���Ϳ� alpha�� ������ �����ش�.
	}
	vector<int> temp; //�������� ����
	temp.assign(alpha.begin(), alpha.end()); //���� �����Ѵٰ� �˸��
	sort(temp.begin(), temp.end()); //����
	//�ִ밪�� 1���� �ʰ��ϸ� ������ ���ǿ� �������� ����.
	if (temp[25] == temp[24])
	{
		cout << '?';
	}
	else
	{
		result = max_element(alpha.begin(), alpha.end()) - alpha.begin() + 65;
		cout << result;
	}
}