
#include<stdio.h>
int main()
{
       char name[1000]="Welcome to the world of love	";
       int i=0,length=0,new_length,num_spaces=0, j=0;



#if 1
    // count spaces and find current length
    for (i = 0; name[i]; i++)
        if (name[i] == ' ')
            num_spaces++;


printf(" the value of i before removing trailing spaces %d\n", i); // 10


    // Remove trailing spaces
    while (name[i-1] == ' ')
    {
       num_spaces--;
       i--;
    }

#endif
printf(" the value of num_spaces %d\n", num_spaces);
       new_length= i + (num_spaces * 2);


printf(" the value of new_length %d\n", new_length); // 12

       name[new_length]='\0';

printf(" the value of i %d\n", i); // 10

       for(j=i;j>=0;j--)
       {
              if(name[j]== ' ')
              {
                     name[new_length]='%';
                     name[new_length-1]='2';
                     name[new_length-2]='0';
                     new_length=new_length-3;
              } else {
                     name[new_length] = name[j];
                     new_length=new_length-1;
		 //    new_length--;

              }
       }
       printf("string=%s\n",name);
 
return 0;
}

