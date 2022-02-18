// 9375 ÆÐ¼Ç¿Õ ½ÅÇØºó

#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<string, string> arr;
	map<string, int> arr_2;
	string A, B;
	int N = 0, M = 0, sum = 1;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		for (int j = 0; j < M; j++)
		{
			cin >> A >> B;
			arr.insert({ A, B });
			arr_2[B]++;
		}
		for (auto iter = arr_2.begin(); iter != arr_2.end(); iter++)
		{
			sum *= (iter->second + 1);
		}
		cout << sum - 1 << '\n';
		arr.clear();
		arr_2.clear();
		sum = 1;
	}
}