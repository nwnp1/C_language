#include <stdio.h>

void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

int main(void)
{
	char* ptr_ary[] = { "eagle", "asda", "Asdas", "asda" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(&ptr_ary, count);

	return 0;
}