//for.c

#include <stdio.h>
#include <string.h> //strlen() 함수 사용하기

int main(void)
{
	char* string = "Hanbat Natonal University";
	
	//strlen() = char 배열의 길이를 확인하는 함수
	for (int i = 0; i < strlen(string); i++) {
		//A의 ASCII 코드는 65
		//a의 ASCII 코드는 97
		if (string[i] == 'a')
		{
			char upper = string[i] - 32;
			printf("Index %d: %d\n", i, upper);
		}
		else if (string[i] == ' ')
		{
			continue;; // ' ' 출력하지 않다
		}
		else {
			printf("Index %d: %d\n", i, string[i]);
		}
	}
	
	getch();

	return 0;
}