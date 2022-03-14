
#include<stdio.h>

int main()
{
	struct num {
		unsigned bit0: 1;
		unsigned bit1: 1;
		unsigned bit2: 1;
		unsigned rest: 5;
	};

	union a
	{
		struct num n;
		char ch;
	}b;

	b.ch = 32;

	printf("%d %d %d %d", b.n.bit0, b.n.bit1, b.n.bit2, b.n.rest);
}

