#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a, b, c;
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				
				if (a*a + b * b == c*c)
				{
					printf("side1:%d    ", a);
					printf("\n");
					printf("side2:%d    ", b);
					printf("\n");
					printf("hypotenuse:%d", c);
					printf("\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}