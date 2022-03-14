
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int main()
{
        int a[10]={0,2,3,4,5,6,7,8,9};
//        int *ptr1=&a;
//        int *ptr2=&a;
//        int *ptr3=&a;

//	printf("Values=%d,%d,%d\n",*++ptr1,*ptr2++,++*ptr3);
        int *ptr1=a;
        int *ptr2=a;
        int *ptr3=a;
printf("Values=%d,%d,%d\n",*++ptr1,*ptr2++,++*ptr3);
}
