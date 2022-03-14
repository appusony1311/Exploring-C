
#include<stdio.h>

int add(int x, int y)
{
        while(y!=0)
        {
                int carry = x&y;
                x=x^y;
                y=carry<<1;
        }
        return x;
}


int main()
{
	int product =0, a =15, b =15, i=0;
	
//	scanf("%d %d", &a, %b);


	
	for(i=0;i<b;i++)
	{
		product = add (product, a);
	}

	printf(" product of %d & %d is %d\n", a, b, product);

	return 0;
}

