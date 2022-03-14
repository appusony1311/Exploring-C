
int main()
{
	static int sub[5] = { 10, 20, 30, 40, 50 };
	int i;
	for(i=0; i <=4; i++)
	{
		if (i<=4)
		{
			sub[i] = i*i ;
			printf("%d\n", sub[i]); // 0, 1, 4, 9, 16
		}
	}
}

