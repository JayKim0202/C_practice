#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char) * 10);

	printf("문자를 입력하세요: ");
	gets(s1);

	printf("%s\n", s1);

	free(s1);

	return 0;
}