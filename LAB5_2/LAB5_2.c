#include <stdio.h>
int main(void)
{
	char code;
	int value;

	printf("Enter an alphabet: ");
	scanf_s("%c", &code, 1);
	printf("%c %d\n", code, code);

	printf("Enter an  ascii value: ");
	scanf_s("%d", &value);
	printf("%d %c\n", value, value);
}