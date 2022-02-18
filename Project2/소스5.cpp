#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int rep = 0, stu = 0;
	float avg = 0, pct = 0;
	cin >> rep;
	vector<int>score;
	for (int i = 0; i < rep; i++)
	{
		avg = 0, pct = 0;
		while (true)
		{
			cin >> stu;
			if (0 < stu < 1001) break;
		}
		score.resize(stu);
		for (int i = 0; i < stu; i++)
		{
			cin >> score[i];
			if (score[i] < 0 || score[i]>101) i--;
			else	avg += score[i];
		}
		avg /= score.size();
		for (int i = 0; i < score.size(); i++)
		{
			if (avg < score[i]) pct++;
		}
		pct = ((pct / score.size()) * 100);
		cout.precision(3);
		cout << fixed << pct << "%" << endl;
		score.clear();
	}
}