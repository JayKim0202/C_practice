#include <stdio.h>
#include <stdlib.h>

int main()
{
	short* numPtr1 = malloc(sizeof(short)); //2바이트만큼 메모리 할당
	int* numPtr2;

	*numPtr1 = 0x1234;

	numPtr2 = (int*)numPtr1;	//short포인터 numPtr을 int 포인터로 변환
								//메모리 주소만 저장됨

	printf("0x%x\n", *numPtr2);	// 0xfdfd1234: 옆의 메모리를 침범하여 값을 가져옴
								//0xfdfd는 상황에 따라서 값이 달라질 수 있음

	free(numPtr1);

	return 0;
}