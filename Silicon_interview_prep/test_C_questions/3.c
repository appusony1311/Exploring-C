
#include<stdio.h>

main()
{
	int i =100;
	printf("1st i=%d\n", i); // 100
	{
		int i =1;
		printf("2nd i=%d\n", i); // 1
		{
			int i=1;
			i+=1;
			printf("3rd i=%d\n", i); //2
		}
		printf("4th i=%d\n", i); //2
	}
	printf("5th i=%d\n", i); //2
}





