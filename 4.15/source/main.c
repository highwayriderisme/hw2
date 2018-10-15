#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i1, i2, y, t, j;
	printf("輸入您的投資金額:");
	scanf_s("%d", &i1);
	t = 0;
	for(j=0;j<15;j++)
	{
		
		y = j + 1;
		i2 = i1 * (0.1 + 0.05*j);
		i1 = i1 + i2;
		t = t + i2;
		printf("第%d年能賺%d", y, i2);
		printf("\n");
		
		
	}
	printf("共賺%d", t);
	printf("\n");
	system("pause");
	return 0;
}