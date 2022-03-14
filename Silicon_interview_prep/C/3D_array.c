#include<stdio.h>

int main()
{
    static char mess[2][2][50] = {
        {
                "A chink in your aarmour",
                "Y voice in your mailbox"
        },
            
	{
                "Z foot in your tooth",
                "W hole in your pocket"
        }
    };

#if 0
    printf("printing 
   mess[0][0][0]=%c\n 
	   mess[0][1][0]=%c\n

	   mess[1][0][0]=%c\n
	   mess[1][1][0]=%c\n


	   mess[0][0]=%s\n
	   mess[0][1]=%s\n
	   mess[1][0]=%s\n
	   mess[1][1]=%s\n
	   
	   sizeof(mess)=%d\n
	   sizeof(mess[0][0])=%d\n
	   sizeof(mess[0][0][0])=%d\n", 
	   
	   
	   mess[0][0][0], 
	   mess[0][1][0],

	   mess[1][0][0], 
	   mess[1][1][0], 
	   
	   mess[0][0], 
	   mess[0][1], 
	   mess[1][0], 
	   mess[1][1],
	   
	   sizeof(mess),
	   sizeof(mess[0][0]),
	   sizeof(mess[0][0][0]),

	   );
#endif

    printf("printing  mess[0][0][0]=%c\n mess[0][1][0]=%c\n mess[1][0][0]=%c\n mess[1][1][0]=%c\n mess[0][0]=%s\n mess[0][1]=%s\n mess[1][0]=%s\n mess[1][1]=%s\n      sizeof(mess)=%d\n sizeof(mess[0][0])=%d\n sizeof(mess[0][0][0])=%d\n",   mess[0][0][0], mess[0][1][0], mess[1][0][0], mess[1][1][0], mess[0][0], mess[0][1],
           mess[1][0], mess[1][1], sizeof(mess), sizeof(mess[0][0]), sizeof(mess[0][0][0]) );	   
	   
}

