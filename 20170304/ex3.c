#include<stdio.h>
int main()
{
	int i, k;
	printf("�ΰ��� ������ �Է��ϼ���:\n");
	scanf_s("%d", &i);
	scanf_s("%d", &k);
	//scanf_s("%d %d", &i, &k); // 2���� scanf ��  �ϳ��� �Ҷ�
	
	printf("%d + %d = %d\n", i, k, i+k);
	system("pause");
	return 0;
}