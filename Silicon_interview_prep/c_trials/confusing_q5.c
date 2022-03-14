
#include<stdio.h>


int main()
{

	char *ptr1 = "hello", *ptr2;
	ptr2=ptr1;
	ptr1="world";
	printf("ptr1=%s ptr2=%s\n", ptr1, ptr2);
	return 0;

}
