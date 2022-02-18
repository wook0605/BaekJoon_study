#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char buffer[1000001];
	int alphabet[26] = { 0, }, max = 0, max_index = 0;
	scanf("%s", buffer);
	for (int i = 0; buffer[i]; i++)
	{
		if (islower(buffer[i]))
		{
			buffer[i] = toupper(buffer[i]);
		}
		for (int j = 'A'; j <= 'Z'; j++)
		{
			if ((int)buffer[i] == j)
			{
				alphabet[j % 'A']++;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			max_index = i;
		}
		else if (max == alphabet[i] && max)
		{
			max_index = '?' - 'A';
		}
	}

	printf("%c", max_index + 'A');
}