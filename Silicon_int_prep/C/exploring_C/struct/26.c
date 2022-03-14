
#include<stdio.h>
#include<string.h>

int main()
{
	union
	{
		unsigned long l;
		unsigned int d[2];
		char ch[4];
	}a;

	strcpy(a.ch, "ABC");

	printf("%s\n", a.ch);
	printf("%u %u\n", a.d[0], a.d[1]);
	printf("%lu\n", a.l);
}
