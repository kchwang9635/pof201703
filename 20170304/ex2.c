#include<stdio.h>
int main()
{
	int i; // ���� int-->%d
	i = 99;
	// ������ �Է��ϼ���:
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &i); // i ������ �ּҰ� ���ȴ�
	
	// �Է��� ���ڴ� ... �Դϴ�;
	printf("�Է��� ���ڴ� %d �Դϴ�\n", i); // ���
	system("pause");
	return 0;
}