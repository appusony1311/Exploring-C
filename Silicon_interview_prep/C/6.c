#include<stdio.h>

main()
{
        int arr[]={0,1,2,3,4};
        int i, *p;
//        for(p=arr, i=0;p+i <= arr+4;p++, i++)
		p=arr;
		i=0;
		while(p+i <= arr+4)
		{

			printf("%d\n", *(p+i));
			p++;
			printf(" the address of ponter p+i = %p\n", p+i);
			i++;
			printf(" the address of var i = %d\n", i);
		}
}

