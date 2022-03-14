#include<stdio.h>

int main()
{
	static char str[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char *s;
	int i;
	s=str;
	for(i=0; i<=9; i++)
	{
		printf("value of *s in d format %d\n", *s);
		printf("value of *s in d format %c\n", *s);
		if(*s)
			printf("%c", *s);
		s++;
	}
}
