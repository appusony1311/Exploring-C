
#include<stdio.h>
void print(char*);

void main()
{
	char str[20] = "embedded";
	print(str);
}

void print(char *s)
{
	if(*s)
	{
		printf("%c\n", *s++);
		printf("%c\n", *s++);
		//print(s++);
	}
}


