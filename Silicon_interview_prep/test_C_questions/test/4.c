
#include<stdio.h>

main()
{
	int arr[] = {0,1,2,3,4};
	int i, *ptr;

	printf(" the base addr of arr = %p\n", &arr[0]);
#if 1
	for(ptr=arr+4; ptr>=arr; ptr--)
	{
		printf(" the addr of ptr %p\n", ptr);
		printf("%d\n", *ptr);
	}

		printf(" the addr of ptr after for loop %p\n", ptr);

#endif
#if 0
	ptr=arr+4;
	printf(" the value of arr+4 = %d\n", *ptr);
	ptr--;
	printf(" the value of arr+3 = %d\n", *ptr);
	ptr--;
	printf(" the value of arr+2 = %d\n", *ptr);
	ptr--;
	printf(" the value of arr+1 = %d\n", *ptr);
	ptr--;
	printf(" the value of arr = %d\n", *ptr);


	ptr=arr+4;
	for(i=0;i<=4;i++)
		printf("the value of ptr = %d\n", *ptr--);
	while(ptr=&arr[0])
	{	
		printf("%d\n", *ptr);
		ptr--;
	}
#endif		

}
