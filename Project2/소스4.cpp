#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char>answer;
	string ans = "";
	int count = 0, score = 0, rep = 0;
	cin >> rep;
	for (int a = 0; a < rep; a++)
	{
		count = 0, score = 0;
		cin >> ans;
		for (int i = 0; i < ans.size(); i++)
		{
			answer.emplace_back(ans.at(i));
		}
		
		for (int i = 0; i < answer.size(); i++)
		{
			if (answer[i] == 'O' && i == 0)
			{
				count++;
				score += count;
			}
			else if (answer[i] == 'O' && answer[i - 1] == 'O')
			{
				count++;
				score += count;
			}
			else if (answer[i] == 'O' && answer[i - 1] == 'X')
			{
				count++;
				score += count;
			}
			else
			{
				count = 0;
			}
		}

		cout << score << endl;
		answer.clear();
	}
	
}