//���ڿ��� ����� hello1.txt ������ �־����ϴ�.
//���� ó������ ���������� 7����Ʈ �������� 4����Ʈ��ŭ �а�, ���� ������ ���������� 6����Ʈ �������� 2����Ʈ��ŭ ���� ���� ����ϴ� ���α׷��� ���弼��.
//��, ���� ���ڿ��� �������� ����� �ʰ� �ٿ��� ����մϴ�.

//worlwo

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[30] = { 0, };

	FILE* fp = fopen("hello1.txt", "r");

	fseek(fp, 7, SEEK_SET);
	fread(buffer, 4, 1, fp);

	printf("%s", buffer);

	memset(buffer, 0, 30);

	fseek(fp, -6, SEEK_END);
	fread(buffer, 2, 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}