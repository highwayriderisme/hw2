#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i1, i2, y, t, j;
	printf("��J�z�������B:");
	scanf_s("%d", &i1);
	t = 0;
	for(j=0;j<15;j++)
	{
		
		y = j + 1;
		i2 = i1 * (0.1 + 0.05*j);
		i1 = i1 + i2;
		t = t + i2;
		printf("��%d�~����%d", y, i2);
		printf("\n");
		
		
	}
	printf("�@��%d", t);
	printf("\n");
	system("pause");
	return 0;
}