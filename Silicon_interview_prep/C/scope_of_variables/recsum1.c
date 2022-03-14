
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int recsum(int i)
{

#if 0
        static int sum =0;

        if(i==3)
                return(sum);
        else {
                sum = sum +10;
                i++;
                recsum(i);
        }
#endif

// int sum =0;

printf("value of i=%d\n", i);

 #if 1
        for(;i<=3;i++)
        {
            static int sum = 0;

            if(i==3)
                return sum;

            printf("val sum before %d\n", sum);
                    sum = sum+ 10;
            printf("val sum after %d\n", sum);



        }

       // return sum;


#endif

}

int main()
{
        int z, y;
        z = recsum(1); // 20
        y = recsum(1); // 40
        printf("z=%d, y=%d\n", z, y);
}


// expected output z = 20, y =40
