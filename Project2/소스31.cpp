// 1145번 (다시풀어보기)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int line = 0, sum = 0;
	cin >> line;
	vector<vector<int>>RGB(line, vector<int>(3, 0));
	vector<int>minimum(line, 0);
	vector<int>minimum_index(line, 0);

	for (int i = 0; i < line; i++)
	{
		cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];
	}

	for (int i = 0; i < line; i++)
	{
		minimum[i] = *min_element(RGB[i].begin(), RGB[i].end());
		minimum_index[i] = min_element(RGB[i].begin(), RGB[i].end()) - RGB[i].begin(); //해당 최소값 위치
		if (i != 0 && minimum_index[i - 1] == minimum_index[i])
		{
			RGB[i][minimum_index[i]] = 1000;
			minimum[i] = *min_element(RGB[i].begin(), RGB[i].end());
			minimum_index[i] = min_element(RGB[i].begin(), RGB[i].end()) - RGB[i].begin();
		}

		sum += minimum[i];
	}

	cout << sum;
}