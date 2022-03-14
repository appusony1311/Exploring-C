
#include <stdio.h>

struct virus
{
	char sig[25];
	int size;
}v[2];

int main()
{
	static struct v[0] = {"Yankee Doodle", 1813};
	static struct v[1] = {"Dark Avenger", 1795};
	int i;

	for(i=0;i<=1;i++)
		printf("%s %d\n", v[i].sig, v[i].size);
}

