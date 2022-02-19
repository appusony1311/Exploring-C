

//PART II: Remove the duplicate words from the strings & print unique words from strings
#if 0
int remove_duplicate_words(char *str)
{

    char words[6][16];

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
    printf("Result is:\n");
    for (i = 0; i < k + 1; i++) {
        if (words[i][j] == 0)
            continue;
        else
            printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
#endif

#if 0
//PART I: Combine given n strings
char* combine_n_strings(char** name)
{

	int i, j, k, n;

	//combine the strings
	for(i=1;i<=n;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{
			full[k++]=name[i][j];
		}
		full[k++]='';
		
		if(i==n)
		full[k++]='\0';
	}
	
	return full;
}
#endif

void main()
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
	}

	//combine the strings
	for(i=1;i<=n;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{
			full[k++]=name[i][j];
		}
		full[k++]='';
		
		if(i==n)
		full[k++]='\0';
	}

	printf("the concatenated string is %s", full);

}	
	
	
	
