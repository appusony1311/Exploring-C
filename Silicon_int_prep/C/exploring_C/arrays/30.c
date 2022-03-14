
#include<stdio.h>

int main()
{
	static int n[3][3] = 
	{
		2, 4, 3,
		6, 8, 5,
		3, 5, 1
	};

	int i, *ptr;
	ptr = n;
	printf("%d\n", n[2]);
	printf("%d\n", ptr[2]);
	printf("%d\n", *(ptr+2));
}
	

















