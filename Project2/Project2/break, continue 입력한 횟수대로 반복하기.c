#include <stdio.h>

int main()
{
	int count;

	scanf("%d", &count);

	int i = 1;
	while (1)
	{
		printf("%d\n", i);
		if (i == count)
			break;

		i++;
	}

	return 0;
}