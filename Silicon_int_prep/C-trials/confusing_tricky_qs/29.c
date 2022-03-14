
#include<stdio.h>
#include<limits.h>
int main()
{
        int a=4,b=5;
        b= a++ + a--; // b = 8, 
        a= ++b + b--; // 9 + 9 , a = 18, b = 9
        printf("a=%d\n",a); // 
        printf("b=%d\n",b); // 8
        return 0;
}
