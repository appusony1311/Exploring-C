#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#if 1
char *duplicate(char *s)
{

#if 0
OBSERVATIONS:
	Here pointer value  is local to this function.
	Here pointer is just an address variable which holds the address of str char pointer
#endif

	char *str;
	char *p;
//	char *p = malloc(strlen(s)+1);

	//str =  malloc(strlen(s)+1);
	str =  malloc(sizeof(s));


	  p = str;

	
	while (*s)
		*p++ = *s++;

	*p = '\0';

//	printf("the value of pointer p %c\n", *p);
	
	return str;
}
#endif

#if 0
char *ft_strdup(char *src)
{
    char *str;
    char *p;
    int len = 0;

    while (src[len])
        len++;
    str = malloc(len + 1);
    p = str;
    while (*src)
        *p++ = *src++;
    *p = '\0';
    return str;
 //   return &p[0];
}
#endif

int main()
{
    char source[] = "GeeksForGeeks";
  
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = duplicate(source); 
    //char* target = ft_strdup(source); 
  
    printf("%s\n", target);
    return 0;
}
