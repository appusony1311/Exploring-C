
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

int main()
{
   struct abc{
                int len;
                char *str;
        } ;

   struct abc student_name = {10,"Naveen"};
   struct abc *ptr=&student_name;

   ++ptr->len;

   printf("name=%s,len=%d\n",student_name.str,student_name.len);
   return 0;
}
