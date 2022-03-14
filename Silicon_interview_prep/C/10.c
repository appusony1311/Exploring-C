
#include<stdio.h>

void fun(int);
int main()
{
	int a;
	a=3;
	fun(a);
//	printf("\n");
	return 0;
}

void fun (int n)
{
//	n=-1;
	if(n>0)
	{
		fun(--n);
	printf("After 1st fun(--n) %d\n", n);
		fun(--n);
		printf("After second fun(--n) %d\n", n);
	}
}
