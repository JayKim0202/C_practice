#include <stdio.h>

int main()
{
	int num1 = 10;

	if (num1 == 10)
		printf("if  조건문\n");
		printf("10입니다.\n"); //if로 실행할 코드가 두 줄 이사일 떄 중괄호를 생략하면 컴파일 에러 발생
	else
		printf("else\n");
		printf("10이 아닙니다.\n");

	return 0;
}