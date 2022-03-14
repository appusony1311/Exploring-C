#include<stdio.h>

int i;
main()
{
	int j;
	for(;;)
	{
		if(j=function(i))
			printf("j=%d\n",j);
		else
			break;
	}
}
function(x)
	int x;
{
	static int v=2;
	printf(" The value of v %d\n", v);
	v--;
	return(v-x);
}

