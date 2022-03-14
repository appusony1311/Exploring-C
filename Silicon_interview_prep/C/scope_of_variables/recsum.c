
#include<stdio.h>

int main()
{
	int z, y;
	z = recsum(1);
	y = recsum(1);
	printf("z= %d\n, y=%d\n", z, y);
}

int recsum(int i)
{
	static int sum =0;

	if(i==3)
		return(sum);
	else {
		sum = sum +10;
		i++;
		recsum(i);
	}}


