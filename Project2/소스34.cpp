// 1316 그룹단어체커
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string S;
	int N = 0;
	vector<int> alpha(26, -1);
	int pos = 0, count = 0;
	bool check = false;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		check = false;
		cin >> S;
		for (int j = 'a'; j <= 'z'; j++)
		{
			alpha[j % 'a'] = S.find_first_of(j);
			pos = S.rfind(j);
			if (pos > 0)
			{
				for (int k = alpha[j % 'a']; k <= pos; k++)
				{
					if (S[k] != j)
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