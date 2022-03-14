
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
		char y;
	};
	union c
	{
		struct a aa;
		struct b bb;
	};
	union c u;

	u.aa.i =256;
	u.aa.j=512;

	printf("%d %d\n", u.aa.i, u.aa.j);
	printf("%d %d\n", u.bb.x, u.bb.y);
}

