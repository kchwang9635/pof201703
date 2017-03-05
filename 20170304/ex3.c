#include<stdio.h>
int main()
{
	int i, k;
	printf("두개의 정수를 입력하세요:\n");
	scanf_s("%d", &i);
	scanf_s("%d", &k);
	//scanf_s("%d %d", &i, &k); // 2개의 scanf 를  하나로 할때
	
	printf("%d + %d = %d\n", i, k, i+k);
	system("pause");
	return 0;
}