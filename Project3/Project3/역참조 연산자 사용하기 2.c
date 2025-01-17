#include <stdio.h>

int main()
{
	int* numPtr; 
	int num1 = 10;

	numPtr = &num1; //num1의 메모리 주소를 포인터 변수에 저장

	*numPtr = 20; //역참조 연산자로 메모리 주소에 접근하여 20저장 : (num1 == 20)

	printf("%d\n", *numPtr); // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
	printf("%d\n", num1); // 20: 실제 num1의 값도 바뀜

	return 0;
}