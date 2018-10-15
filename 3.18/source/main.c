#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, b;
	a = 0;
	for (; a != -1;)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &a);
		b = a * 0.09 + 200;
		printf("Salary is:%.2f", b);
		printf("\n");
		printf("\n");
	}
}