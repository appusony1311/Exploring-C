#include<stdio.h>

int main()
{
	int a=3;
        switch(a) {
                printf("I will be executed allways\n");
                default:
                        printf("I am a default case , I am executed every time\n");
                        break;
                case 1:
                        printf("I am :case 1\n");
                        break;
                case 2:
                        printf("I am :case 2\n");
                        break;
        }
}
