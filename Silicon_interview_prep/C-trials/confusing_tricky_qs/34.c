
#include<stdio.h>
int main()
{
	int x,y,z;
	x=0; y=1;
	z= x && ++y;
	printf("values x y z = %d %d %d\n",x,y,z);
	return 0;
}
