#include <stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++)
	{	
		if (i % 2 != 0) //i를 2로 나누었을 때 나머지가 0이 아니면 홀수
		continue;       //아래 코드를 실행하지 않고 건너뜀

		printf("%d\n", i);
	}

	return 0;
}