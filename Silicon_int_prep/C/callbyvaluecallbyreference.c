
#include <stdio.h>
void swap(int * /*, int * */); //prototype of the function
int main()
{
    int a = 10;
    int b = 20;
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main
//    swap(&a,&b);
    swap(&a);
    printf("After swapping values in main a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20
}
void swap (int *a/*, int *b*/)
{
	int temp = 100;
	//temp = *a;
    *a=temp;
   // *b=temp;
    printf("After swapping values in function a = %d\n",*a); // Formal parameters, a = 20, b = 10
}
