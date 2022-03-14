#include<stdio.h>

static int i=20;
extern int i;

void main()
{
	printf("%d\n", i);
}
