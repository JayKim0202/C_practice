#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);		// 파일 포인터를 파일의 끝으로 이동시킴
	size = ftell(fp);			// 파일 포인터의 현재 위치를 얻음

	printf("%d\n", size);

	fclose(fp);

	return 0;
}