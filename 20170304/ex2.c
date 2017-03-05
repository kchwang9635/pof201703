#include<stdio.h>
int main()
{
	int i; // 정수 int-->%d
	i = 99;
	// 정수를 입력하세요:
	printf("정수를 입력하세요:");
	scanf_s("%d", &i); // i 변수의 주소가 사용된다
	
	// 입력한 숫자는 ... 입니다;
	printf("입력한 숫자는 %d 입니다\n", i); // 출력
	system("pause");
	return 0;
}