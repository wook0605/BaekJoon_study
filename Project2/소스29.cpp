#include <iostream>

using namespace std;

int main()
{
	int height = 0, day = 0, night = 0, result = 1;
	cin >> day >> night >> height;
	if ((height - day) % (day - night) == 0)
	{
		result += (height - day) / (day - night);
	}
	else
	{
		result += (height - day) / (day - night) + 1;
	}
	
	cout << result;
}