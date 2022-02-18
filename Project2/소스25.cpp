#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string S;
	vector<int> alpha(26);
	alpha.assign(alpha.size(), -1);
	cin >> S;

	for (int i = 0; S[i]; i++)
	{
		if (alpha[S[i] % 'a'] == -1)
		{
			alpha[S[i] % 'a'] = i;
		}
	}

	for (int i = 'a'; i<='z'; i++)
	{
		cout << alpha[i%'a'] << " ";
	}
}