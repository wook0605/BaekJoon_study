//카운팅 정렬 (계수 정렬)

#include <cstdio>

using namespace std;

int main()
{
	int N = 0, num_arr[10001] = { 0, }, count = 0, arr = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr);
		num_arr[arr]++;
	}

	for(count; count < 10001; count++)
	{
		for (int i = 0; i < num_arr[count]; i++)
		{
			printf("%d\n", count);
		}
	}
}