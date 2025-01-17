#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 헤더 파일

int main()
{
	int num1 = 20; //int형 변수 선언
	int* numPtr1;  //int형 포인터 선언

	numPtr1 = &num1; //numq의 메모리 주소를 구하여 numPtr에 할당

	int* numPtr2; //int형 포인터 선언

	numPtr2 = malloc(sizeof(int)); //int의 크기 4바이트만큼 동적 메모리 할당

	printf("%p\n", numPtr1);

	printf("%p\n", numPtr2);

	free(numPtr2); //동적으로 할당한 메모리 해제

	return 0;
}