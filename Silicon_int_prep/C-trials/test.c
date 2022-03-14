
#include <stdio.h>

int main()
{
int i, j, k, n;
char name[10][50], full[50];
printf("Enter the count of no. of strings:");
scanf("%d", &n);

//Read the strings
for(i=1; i<=n;i++)
{
printf("Enter the strings[%d]=", i);
scanf("%s", name[i]);
printf("Enter the strings %s\n=", name[i]);
}

//combine the strings
for(i=1;i<=n;i++)
{
for(j=0;name[i][j]!='\0';j++)
{
full[k++]=name[i][j];
}

full[k++]=' ';

if(i==n)
full[k++]='\0';


}

printf("\n\nthe concatenated string is: %s", full);
}
