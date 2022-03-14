
#include<stdio.h>

int i=0;
main()
{
	printf("in main i = %d\n", i); // 0
	i++;
	val();
	printf("after val in main i = %d\n", i); // 1 // 2
}

val()
{
	//int i = 100;
	printf("in val i = %d\n", i); //100 // 1
	i++;
}
