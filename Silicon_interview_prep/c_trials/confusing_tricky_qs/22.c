
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int main()
{
	int num1,num2,total=0;

	printf("Enter two number :\n");
	scanf("%d%d",&num1,&num2);

	while(num1 > 0)
	{
		printf ("value of num1 after while loop %d\n", num1);
		if(num1 & 1) {

		printf ("value of num1 after while loop %d\n", num1);
			total+=num2;

		printf ("value of num2 after total+=num2  %d\n", num2);

		}
		num1=num1>>1;
		
		printf ("value of num1 after num1=num1>>1 %d\n", num1);
		num2=num2<<1;


		printf ("value of num2 after num2=num2<<1  %d\n", num2);
	}
	printf("output=%d\n",total);
}
