
#include<stdio.h>
int main()
{
	int i=10;
	int *ptr=&i;
	scanf("%d",ptr);
	printf("the value of i=%d\n",i);
	return 0;
}
