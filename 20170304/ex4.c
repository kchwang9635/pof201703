#include<stdio.h>
int main()
{
	//�Ǽ��� type= float, double
	double d1, d2;
	d1 = 2.4;
	d2 = 1.12;
	// �� ���ڸ� �Է��ϼ���
	printf("�� ���ڸ� �Է��ϼ���:");
	scanf_s("%lf", &d1);
	scanf_s("%lf", &d2);
	// ���� ���� ���	
	printf("%lf * %lf = %lf\n", d1, d2, d1*d2); // lf == long float
	system("pause");
	return 0;
}