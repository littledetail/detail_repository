#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 2;
	i = i - j;
	while (i < 10)
	{
		i++;
		printf("i=%d\n", i);
	}
	return 0;
}
