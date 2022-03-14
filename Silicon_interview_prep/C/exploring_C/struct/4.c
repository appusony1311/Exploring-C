
#include<stdio.h>

struct s
{
	char ch;
	int i;
	float a;
};

int main()
{
	static struct s var = { 'C', 100, 12.55};
	f(&var);
	g(&var);
}

f(struct s *v)
//struct s *v;
{
	printf("%c %d %f\n", v->ch, v->i, v->a);
}

g(struct s *v)
//struct s *v;
{
	printf("%c %d %f\n", (*v).ch, v->i, v->a);
}


