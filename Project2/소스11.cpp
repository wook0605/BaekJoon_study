// 2941 ũ�ξ�Ƽ�� ���ĺ�

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    string str = " ";
	char croatia_alpha[][8] = { {'c','='}, {'c', '-'}, {'d','z','='}, {'d', '-'}, {'l', 'j'}, {'n', 'j'},{'s', '='}, {'z', '='} };
    int pos = 0;
	cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (S.find(croatia_alpha[j]) != string::npos) //ũ�ξ�Ƽ�� ���ĺ� �߰�
            {
                int pos = S.find(croatia_alpha[j]);
                if (S[pos] == 'd' && S[pos + 1] == 'z' && S[pos+2] == '=')
                {
                    S.replace(S.begin() + pos, S.begin() + (pos + 3), str);
                }
                else
                {
                    S.replace(S.begin() + pos, S.begin() + (pos + 2), str); 
                }
                break;
            }
        }
    }
    cout << S.length();
}