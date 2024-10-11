//gugudan.c

#include<stdio.h>

void ShowMul(int step); //함수 원형

int main(void)
{
	for (int m = 1; m <= 9; m++)
	{
		printf("\n=== Group %d ===\n", m);
		ShowMul(m);
	}
	getch();

	return 0;
}

void ShowMul(int step)
{
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", step, i, step * i);
	
}