
#include<stdio.h>
void fun(int );
int main()
{
	int x=2;
	fun(x++);
	return 0;
}
void fun(int x)
{
	printf("value=%d\n",x++);
}
