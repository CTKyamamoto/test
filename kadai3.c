#include <stdio.h>
#define MAX 7

void main(void)
{
	int i,j;
	
	//iをj回数分表示する処理
	for(i=1; i<=MAX; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}