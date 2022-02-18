// 1786 찾기 (못품 ㅋ)

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <functional>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string test, src;
	char test_[1000000];
	vector<string> testcase;
	stringstream sstream(test);
	int result = 1, count = 0;

	cin.getline(test_, 1000000);
	test = test_;
	size_t pos = 0;

	while ((pos = test.find(" ")) != string::npos) // 토크나이징
	{
		testcase.push_back(test.substr(0, pos));
		test.erase(0, pos + 1);
		result++;
		
	}
	testcase.push_back(test);
	cin >> src;
	for (int i = 0; i < testcase.size(); i++)
	{
		if (testcase[i].find(src) != testcase[i].size())
		{
			cout << testcase[i].find(src) << "\n";
			cout << testcase[i].size() << "\n";
		}
	}

	cout << count << "\n";
	for (int i = 0; i < testcase.size(); i++)
	{
		if (testcase[i].size() >= src.size())
		{
			if (testcase[i].find(src) != testcase[i].size())
			{
				result += testcase[i].find(src);
				cout << result;
			}
		}
		else
		{
			result += testcase[i].size();
		}
	}


	

}