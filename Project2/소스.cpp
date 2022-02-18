//문자열 중 어떤 알파벳이 가장 많이 나왔고, 나온 횟수는 얼마인지 출력하시오 (ASCII CODE A : 65 Z : 90)
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
	cout << "가장 많이나온 알파벳은" << alpha << "로, 총" << count[max] << "회 사용됨\n";
}