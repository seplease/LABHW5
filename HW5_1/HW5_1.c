#include <stdio.h>
int main(void)
{
	char ch;

	printf("Enter an upper letter(A-Y): ");
	scanf_s("%c", &ch);
	printf("Character given is %c(%d)\n", ch, ch);
	printf("The next character is %c(%d)\nThe lower case letter is %c(%d)", ch + 1, ch + 1, ch + 32, ch + 32);
}