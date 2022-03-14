
#include<stdio.h>

main()
{
	static char mess[2][2][20] = {
						{
							"A chink in your armour",
							"A voice in your mailbox",
						},
						{
							"A foot in your tooth",
							"A hole in your pocket",
						}
	};

//	printf("%s\n%s\n", mess[1][0], mess[0][1]);
	//printf("%s\n%s\n", mess[0][1], mess[1][1]);
	printf("%s\n", mess[0][1]);
//	printf("%c\n", mess[0][1][2]);
//	printf("%c\n", mess[0][1][0]);
}

