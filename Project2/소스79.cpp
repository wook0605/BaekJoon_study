#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string str = ""; //문자열 저장 변수
	vector<int> alpha(26); //알파벳 개수 저장 벡터
	char result = 'a'; //형식지정자 사용 불가해서 사용하는 캐릭터형 변수
	cin >> str; //문자열 입력 받고
	//baaa
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]); //대문자로 변경 -> b-> B str[0] = B 시작값은 
		alpha[str[i] % 65]++; //alpha 벡터에 alpha의 개수를 더해준다.
	}
	vector<int> temp; //정렬해줄 벡터
	temp.assign(alpha.begin(), alpha.end()); //벡터 복사한다고 알면됨
	sort(temp.begin(), temp.end()); //정렬
	//최대값이 1개를 초과하면 무조건 조건에 부합하지 않음.
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