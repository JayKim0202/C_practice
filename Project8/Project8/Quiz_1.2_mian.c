#include <stdio.h>
#include "Quiz_1.2.h"

extern struct Point3D p1;

int main()
{
	printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);

	return 0;
}