#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a;
	float b, c, d;
	a = 0;
	for (;a!=-1;)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &a);
		if (a > 40)
		{
			if (a == 0)
			{
				exit(0);
			}
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &b);
			c = (a - 40)*b*1.5 + 40* b;
			printf("Salary is $%.2f", c);
			printf("\n");
		}
		else if(a>=0 && a<=40)
		{
			if (a == 0)
			{
				exit(0);
			}
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &b);
			c =a*b;
			printf("Salary is $%.2f", c);
			printf("\n");
		}
		else 
		{
			printf("error,please enter again");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}