//lamp.c

#include<stdio.h>

unsigned char Lamp0ff(unsigned char dest, unsigned char bit);
unsigned char Lamp0n(unsigned char dest, unsigned char bit);

int main(void)
{
	unsigned char lamp = 0x7F; //lamp�� ���� (0111 1111) 0x7F
	printf("Lamp 0ff!\n");
	printf("%x -> ", lamp);
	lamp = Lamp0ff(lamp, 3); //lamp�� ����(0111 0111) 0x77
	printf("%x\n", lamp);

	printf("\nLamp 0n!\n");
	printf("%x -> ", lamp); //lamp�� �̹� ���� (0111 0111) 0x77
	lamp = Lamp0n(lamp, 3); //lamp�� ����(0111 1111) 0x7F
	printf("%x\n", lamp);

	getch();

	return 0;
}
unsigned char Lamp0ff(unsigned char dest, unsigned char bit)
{
	if (bit < 8)
	{
		dest = dest & ~(0x01 << bit); // AND ����ϸ� 0���� ����
	}
	return dest;
}
unsigned char Lamp0n(unsigned char dest, unsigned char bit)
{
	if (bit < 8)
	{
		dest = dest | (0x01 << bit); // OR ����ϸ� 1�� ����
	}
	return dest;
}