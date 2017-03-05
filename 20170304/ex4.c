#include<stdio.h>
int main()
{
	//실수의 type= float, double
	double d1, d2;
	d1 = 2.4;
	d2 = 1.12;
	// 두 숫자를 입력하세요
	printf("두 숫자를 입력하세요:");
	scanf_s("%lf", &d1);
	scanf_s("%lf", &d2);
	// 곱셈 값을 출력	
	printf("%lf * %lf = %lf\n", d1, d2, d1*d2); // lf == long float
	system("pause");
	return 0;
}