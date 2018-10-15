#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a,c;
	double b,d;
	printf("If you are manager,your paycode is 1");
	printf("\n");
	printf("If you are hourly worker,your paycode is 2");
	printf("\n");
	printf("If you are commission,your paycode is 3");
	printf("\n");
	printf("If you are pieceworker,your paycode is 4");
	printf("\n");
	printf("Enter your paycode:");
	scanf_s("%d", &a);
	
	switch (a)
	{
	    case 1:
		{
			printf("Enter your weekly salary:");
			scanf_s("%lf",&b);
			printf("You can get:$%.0lf", b);
			printf("\n");
			break;
		}
		case 2:
		{
			printf("Enter your hourly salary:");
			scanf_s("%lf", &b);
			printf("Enter your working hours in this week:");
			scanf_s("%d", &c);
			if (c>= 40)
			{
                printf("You can get:$%.0lf", b * 40 + (c - 40)*b*1.5);
				printf("\n");
				break;
			}
			else if (c < 40 && c>=0)
			{
				printf("You can get:$%.0lf", b*c);
				printf("\n");
				break;
			}
			
		}
		case 3:
		{
			printf("Enter your weekly salary:");
			scanf_s("%lf", &b);
			printf("You can get:$%.0lf",250+0.057*b);
			printf("\n");
			break;
		}
		case 4:
		{
			printf("How many items you produced in this week:");
			scanf_s("%d", &c);
			printf("How much money you can get when you produce one product:");
			scanf_s("%lf", &b);
			printf("You can get:$%.0lf",b*c);
			printf("\n");
		}

	}
	system("pause");
	return 0;
}