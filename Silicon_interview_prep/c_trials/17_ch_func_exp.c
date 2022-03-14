
#include<stdio.h>

int main()
{
	int k=35, *z, *y;
	z = &k;

	printf("vlaue of z for first time = %d\n", z);
	printf("vlaue of k for first time = %d\n", &k);
	y = z;
	printf("before z++ = %d\n", z);
	printf("before z++ the value of y = %d\n", y);
	*z++ = *y++;
	printf("after z++ = %d\n", z);
	k++;
	printf("Final = %d z= %d y=%d\n", k, z, y);
}
