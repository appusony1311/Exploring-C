
#include<stdio.h>

main()
{
	static char*mess[] = {
				"Some love one",
				"Some love two",
				"I love one",
				"That is you"
	};

	//printf("%d\n %d", sizeof(mess), sizeof(mess[1]));
	printf("%d\n", sizeof(mess[1]));
	printf("%d\n", sizeof(mess));
}

