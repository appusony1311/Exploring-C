#include <stdio.h>

int main()

{

unsigned int *ptr;

printf ("Pointer ‘ptr’ is of how many bytes %d\n", sizeof(ptr));
printf ("Pointer ‘*ptr’ is of how many bytes %d\n", sizeof(*ptr));
printf ("Pointer ‘*ptr’ is of how many bytes %p\n", sizeof(ptr+4));

return 0;

}
