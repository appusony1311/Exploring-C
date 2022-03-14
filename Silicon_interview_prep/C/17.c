
#include<stdio.h>

int main()
{
	static char s[] = "Lumps, bumps, swollen veins, new pains";
	char t[40];
	char *ss, *tt;
	tt=t;
	ss=s;
	while(*tt++ = *ss++);
	printf("%s\n", t);
}
