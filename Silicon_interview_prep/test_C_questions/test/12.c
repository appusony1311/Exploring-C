
#include<stdio.h>
int sumdig(int);
int main()
{
	int a, b;
	a = sumdig(12);
//	b = sumdig(123);
	//printf("%d %d\n", a, b);
	printf("%d\n", a);
	return 0;
}

int sumdig(int n)
{
	int s,d;
	if(n!=0)
	{
		d=n%10;
		//printf("the value of d = %d\n");
		n=n/10;
	//	printf("the value of n = %d\n");
		s=d+sumdig(n);
	//	printf(" the value of s = %d\n");
	}
	else
		return 0;

	return s;
}

