
#include<stdio.h>
int main(int argc, char *argv[])
{
        while(--argc > 0) {

                printf("%s\n",*++argv);

        }

	printf("1 %c\n",(*++argv)[0]);

	printf("2 %c\n",**++argv);

	printf("3 %c\n",*++argv[1]);


        return 0;
}
