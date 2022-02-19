#include <stdio.h>
#include <string.h>
int remove_duplicate_words(char *str)
{

    char words[2000][2000];

    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (str[i] != 0) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else {
            words[k][j] = str[i];
            j++;
        }
        i++;
    }
    words[k][j] = '\0';

    j = 0;
    for (i = 0; i < k; i++) {
        int present = 0;
        for (l = 1; l < k + 1; l++) {
            if (words[l][j] == '\0' || l == i)
                continue;

            if (strcmp(words[i], words[l]) == 0) {
                words[l][j] = '\0';
                present = present + 1;
            }
        }
    }

    j = 0;
    printf("\nResult is:\n");
    for (i = 0; i < k + 1; i++) {
        if (words[i][j] == 0)
            continue;
        else
            printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}

int main(void)
{
char str[2000];
strcpy(str, "these are words hello hello hello world ");
strcat(str, "I am good strings ");
strcat(str, "I am good are ");
strcat(str, "concatenated.");

printf("The combined string are: %s\n", str);

remove_duplicate_words(str);
	

}

//output:
#if 0
The combined string are: these are words hello hello hello world I am good strings I am good are concatenated.

Result is:
these are words hello world I am good strings concatenated. 
#endif
