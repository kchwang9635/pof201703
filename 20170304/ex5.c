#include<stdio.h>
int main()
{
	char c;//����type == char
	c = 'P';
	printf("���ڸ� �Է��ϼ���:\n");
	scanf_s("%c", &c);
	
	printf("%c �� ASCII�ڵ�=%d\n", c, c); // %c == char
	system("pause");
	return 0;

}