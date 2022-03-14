
#include<stdio.h>
int fun(int,int);
int main()
{
	int i=5;
	fun(--i,i++);

	printf("values before 1  i=%d\n", i);
	fun(++i,i--);

	printf("values before  2 i=%d\n", i);
	return 0;
}
int fun(int x, int y)
{

	printf("values before  in func  x=%d y=%d\n",x,y);
	printf("values x=%d y=%d\n",x++,y--);
	return 0;
}
