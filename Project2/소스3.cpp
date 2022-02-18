#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int max = 0;
	int subject = 0;
	cin >> subject;
	vector<float>ave(subject);
	float average = 0;
	for (int i = 0; i < ave.size(); i++)
	{
		cin >> ave[i];
	}

	max = *max_element(ave.begin(), ave.end());

	for (int i = 0; i < ave.size(); i++)
	{
		ave[i] = ((ave[i] / max) * 100);
	}

	for (int i = 0; i < ave.size(); i++)
	{
		average += ave[i];
	}
	average = average / ave.size();

	cout << average;
}