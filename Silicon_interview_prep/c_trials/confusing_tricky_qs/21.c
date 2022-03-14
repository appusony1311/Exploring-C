
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int add(int a,int b)
{
	printf("i am in add function\n");
	return (a+b);
}

int main()
{
	void *ptr=add;
	printf("Sum of two variables=%d\n", ((int(*)(int,int))ptr)(10,20));
}
