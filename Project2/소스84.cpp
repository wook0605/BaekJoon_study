#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string S; //문자열
	int N = 0; //몇번 입력받을것인지
	vector<int> alpha(26, -1); //알파벳 (-1로 초기화해준것)
	int pos = 0, count = 0; //pos = 위치 , count는 말그대로 그룹단어의 개수
	bool check = false; //check는 그룹단어인지 체크하는것
	cin >> N;
	for (int i = 0; i < N; i++) //총 N번 반복한다.
	{
		check = false; 
		cin >> S; //문자열을 입력받는다.
		for (int j = 'a'; j <= 'z'; j++) // a -> z도 봐야하기 때문에
		{
			alpha[j % 'a'] = S.find_first_of(j); //맨처음으로 찾아지는 위치
			pos = S.rfind(j); //rfind -> reversefind의 줄임말 ->거꾸로에서 처음으로 찾아지는 위치
			if (pos > 0)
			{
				for (int k = alpha[j % 'a']; k <= pos; k++)
				{
					if (S[k] != j) //alpha에 저장되어있는 맨처음 위치, pos 변수에는 마지막 위치가 저장되어있으니까
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