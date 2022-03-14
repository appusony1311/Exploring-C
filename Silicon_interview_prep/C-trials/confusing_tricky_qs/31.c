#include<stdio.h> 
int main() 
{ 
	int i=5,j; 
	j=(i=i+1,i=i+2,i+3); 
	printf("values i and j = %d %d \n",i,j); 
	return 0; 
} 
