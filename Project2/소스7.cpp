//어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
//등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
//N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool detect_artseq(int number)
{
	vector<int>temp;
	int ntemp = number;
	int ntemp_1 = number;
	int i = 1;
	while (ntemp_1!=0)
	{
		ntemp_1 /= 10;
		if (ntemp_1 != 0) i++;
		
	}
	
	while (i != 0)
	{
		temp.push_back(ntemp % 10);
		ntemp = ntemp / 10;
		i--;
	}
	reverse(temp.begin(), temp.end());
	if (temp.size() < 3) return true; //1자리 수 일때
	if (temp[0] - temp[1] == temp[1] - temp[2]) //한수일 때
	{
		return true;
	}
	else return false;
}

int main()
{
	vector<bool>seq;
	int num_range = 0;
	int count = 0;

	while (true)
	{
		cin >> num_range;
		if (num_range < 1001) break;
	}
	seq.assign(num_range+1, true);
	for (int i = 1; i <= num_range; i++)
	{
		seq[i] = detect_artseq(i);
		if (seq[i] == true)
		{
			count++;
		}
			
	}

	cout << count;

}