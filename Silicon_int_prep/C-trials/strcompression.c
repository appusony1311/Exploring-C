
#include<stdio.h>
void xstrcount(char *str)
{
       char temp=*str;
       int i=0,flag=0,count=0;
       char new_str[50];

		//printf("value of str resceived in xstrcount  collected inside temp %d\n", temp);

       while(*str != '\0')
       {
		   
		   printf("value of str temp %c\n", *str);
		   
              if(*str==temp)
              {
                     count++;
                     flag=1;
                     str++;
              } else {
                     new_str[i]=temp;
					printf("value of temp resceived in new_str[i]  collected from temp %c\n", new_str[i]);
                     i++;
					 //printf("value of count %d\n", count);
                     new_str[i]=0x30+count; // for converting a number  to a character that's y 0x30 is added to count
					// printf("value of new_str[i] after 0x30+count %c\n", new_str[i]);
					 //new_str[i]=count;
                     i++;
                     temp=*str;
                     count=0;
                     flag=0;
              }
       }
	   
#if 1
       if(flag==1) {

//printf("Entering  if(flag==1)  part \n");

//printf("Entering  if(flag==1)  part  %c\n", temp);
              new_str[i]=temp;
              i++;
              new_str[i]=0x30+count;
              i++;
              new_str[i]='\0';
       }
#endif
       printf("new string=%s\n",new_str);
}
int main()
{
       char str[]="aaaaaaabbbcccddeeeeee";
       xstrcount(&str[0]);
       return 0;
}
