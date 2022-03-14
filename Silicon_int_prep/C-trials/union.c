
#include<stdio.h>

void fun();

int main()
{
	fun();
}

void fun()
{
	union abc {
		short int a;
		char b;
	}var;

	var.a=0xffff;
	var.b=0x55;

	printf("value of a %x size of var.a %x\n", var.a, sizeof(var.a));
	printf(" value of b %x size of var.b  %x\n", var.b, sizeof(var.b));

	return;
}


