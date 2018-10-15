#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,j;
	
	for (i = 1; i <= 5; i++)
	{
		int k = (9 - i * 2 + 1) / 2;
		for (j = 0; j < k; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (i * 2 - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	for (i = 4; i >= 1; i--)
	{
		int k = (9 - i * 2 + 1) / 2;
		for (j = 0; j < k; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (i * 2 - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}