//for.c

#include <stdio.h>
#include <string.h> //strlen() �Լ� ����ϱ�

int main(void)
{
	char* string = "Hanbat Natonal University";
	
	//strlen() = char �迭�� ���̸� Ȯ���ϴ� �Լ�
	for (int i = 0; i < strlen(string); i++) {
		//A�� ASCII �ڵ�� 65
		//a�� ASCII �ڵ�� 97
		if (string[i] == 'a')
		{
			char upper = string[i] - 32;
			printf("Index %d: %d\n", i, upper);
		}
		else if (string[i] == ' ')
		{
			continue;; // ' ' ������� �ʴ�
		}
		else {
			printf("Index %d: %d\n", i, string[i]);
		}
	}
	
	getch();

	return 0;
}