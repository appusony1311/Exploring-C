
#include<stdio.h>

int main()
{
	struct {
		char name[25];
		char lang[10];
	//}a;
	}a = {"hacker", "C"};
//	static struct a = {"Hacker", "C"};
	printf("%s%s\n", a.name, a.lang);

	return 0;
}
