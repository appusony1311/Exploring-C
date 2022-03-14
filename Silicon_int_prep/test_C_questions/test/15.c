
#include<stdio.h>

int main()
{
	struct a
	{
		int i;
		int j;
	};
	struct b
	{
		char x;
		char y[3];
	};
	union c
	{
		struct a aa;
		struct b bb;
	};
	union c u;

	u.aa.i = 512;
	u.aa.j = 512;

	printf("%d %d\n", u.bb.x, u.bb.y[0]);
	printf("%d %d\n", u.bb.y[1], u.bb.y[2]);
}


