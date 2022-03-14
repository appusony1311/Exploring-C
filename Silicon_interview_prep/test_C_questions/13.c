
#include<stdio.h>
#include <string.h>

int main()
{
	union
	{
		unsigned long l;
		unsigned int d[2];
		char ch[8];
	}a;

	unsigned long longType;

	//strcpy(a.ch, "ABC");
	strcpy(a.ch, "1234678");

	printf("%s\n", a.ch);
//	printf("%u %u\n", a.d[0], a.d[1]);
	printf("%08x %08x\n", a.d[0], a.d[1]);
	printf("Size of unsigned long : %zu byte\n", sizeof(longType));
	//printf("%lu\n", a.l);
	printf("%lX\n", a.l);
}

#if 0
output:
ssriniv4@ssriniv4-NUC8i7BEH:~/test$ ./13
1234678
34333231 00383736
Size of unsigned long : 8 byte
38373634333231
ssriniv4@ssriniv4-NUC8i7BEH:~/test$
#endif

