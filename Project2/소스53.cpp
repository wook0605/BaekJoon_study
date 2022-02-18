//1920 ¼ö Ã£±â

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N = 0, M = 0, temp = 0;
	vector<int>arr_1;
	vector<int>arr_2;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr_1.push_back(temp);
	}

	cin >> M;
	for (int j = 0; j < M; j++)
	{
		cin >> temp;
		arr_2.push_back(temp);
	}

	sort(arr_1.begin(), arr_1.end());

	for (int i = 0; i < arr_2.size(); i++)
	{
		if (binary_search(arr_1.begin(), arr_1.end(), arr_2[i])) cout << 1 << "\n";
		else cout << 0 << "\n";
	}
}