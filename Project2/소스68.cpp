// 문자열 뒤에 숫자가 없다면 1을, 그 외에 숫자가 있다면 숫자를 증가시키는 프로그램을 만드시오

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s;
	vector<int> arr;
	vector<int> arr2;
	int count = 0, temp = 0;
	bool nonum = false;
	cin >> s;
	
	for (int i = s.size() - 1; i > 0; i--)
	{
		if (s[i] > 47 && s[i] < 58) arr.push_back(s[i]);
		else
		{
			if (i == s.size()-1) nonum = true;
			count = i;
			break;
		}
	}
	if (nonum)
	{
		string a = "1";
		s += a;
		cout << s;
	}
	else
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] % 48 == 0)
			{
				arr2.push_back(0);
			}
			temp += ((arr[i]%48) * pow(10, i));
		}
		temp++;
		s.erase(count + 1, s.size() - 1);
		for (int i = 0; i < arr2.size(); i++)
		{
			s += to_string(0);
		}
		s += to_string(temp);
		cout << s;
	}
}