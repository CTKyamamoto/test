#include <stdio.h>

int main(void)
{

	int i;
	int total; /* 合計 */
	
	total = 0;
	
	/* 1から10まで加算する処理 */
	for( i=1; i<=10; i++)
	{
		total += i;
	}
	
	/* 合計を表示する */
	printf("合計 = %d\n" , total);
	
	return 0;
}
//GitHub登録のため修正コメント