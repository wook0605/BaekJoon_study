//2908 상수
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int A = 0, B = 0; //입력받을 정수형 변수
	string str_1, str_2; //문자열 변수
	cin >> A >> B;
	str_1 = to_string(A); //A를 문자열 변환
	str_2 = to_string(B); //B를 문자열 변환

	//변환한 문자열을 뒤집기
	reverse(str_1.begin(), str_1.end()); 
	reverse(str_2.begin(), str_2.end());

	//뒤집은 문자열 다시 정수로 변환
	A = stoi(str_1);
	B = stoi(str_2);
	
	//큰 값 출력
	cout << max(A,B);

}