//2908 ���
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int A = 0, B = 0; //�Է¹��� ������ ����
	string str_1, str_2; //���ڿ� ����
	cin >> A >> B;
	str_1 = to_string(A); //A�� ���ڿ� ��ȯ
	str_2 = to_string(B); //B�� ���ڿ� ��ȯ

	//��ȯ�� ���ڿ��� ������
	reverse(str_1.begin(), str_1.end()); 
	reverse(str_2.begin(), str_2.end());

	//������ ���ڿ� �ٽ� ������ ��ȯ
	A = stoi(str_1);
	B = stoi(str_2);
	
	//ū �� ���
	cout << max(A,B);

}