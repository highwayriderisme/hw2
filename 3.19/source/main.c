#include <stdlib.h>
#include <stdio.h>
int main()
{
	int c;
	float a,b,d;
	a = 0;
	for (;;)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			exit(0);
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		d = a * b * c / 365;
		printf("The interest charge is $%.2f",d);
		printf("\n");
		printf("\n");
	}
	system("pause");
	return 0;
}