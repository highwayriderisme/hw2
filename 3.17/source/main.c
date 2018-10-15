#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, b, c, d,e,f;
	a = 0;
	for(;;)
	{
		printf("Enter account number(-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
		{
			exit(0);
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%f", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &d);
		printf("Enter credit limit: ");
		scanf_s("%f", &e);
		f = b + c - d;
		if (f > e)
		{
			printf("Account: %.2f", a);
			printf("\n");
			printf("Credit limit: %.2f", e);
			printf("\n");
			printf("Balance: %.2f", f);
			printf("\n");
			printf("Credit Limit Exceeded.");
			printf("\n");
			printf("\n");
		}
		else if (f <= e)
		{
			printf("\n");
		}

	} 
	printf("\n");
	system("pause");
	return 0;
	

}









