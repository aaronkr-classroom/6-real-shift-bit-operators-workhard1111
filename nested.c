//nested.c

#include<stdio.h>

int main(void)
{
	int step, i;

	for (step = 1; step <= 9; step++)
	{
		printf("\n=== group %d ===\n", step);
		for (i = 2; i <= 9; i++)
		{ //내부 반복문
			printf("%d * %d = %d\n", step, i, step * i);
		}

	}
	getch();

	return 0;
}