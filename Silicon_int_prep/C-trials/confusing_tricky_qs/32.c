#include<stdio.h>

int main()
{
	int i=0;
	switch(i) {
		case 2+2: printf("four"); break;
		case 2/2: printf("one"); break;
		case 2-2: printf("zero"); break;
		case 2+1: printf("three"); break;
		default : printf("default\n"); break;

	}
	return 0;
}
