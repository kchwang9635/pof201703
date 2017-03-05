#include<stdio.h>
int main()
{
	char c;//문자type == char
	c = 'P';
	printf("문자를 입력하세요:\n");
	scanf_s("%c", &c);
	
	printf("%c 의 ASCII코드=%d\n", c, c); // %c == char
	system("pause");
	return 0;

}