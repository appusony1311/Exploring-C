
#include<stdio.h>

int main()
{
    static int i = 10;
    if (i >= 1) {
        printf("%d ", i--);
        main();
    }
    return 0;
}




