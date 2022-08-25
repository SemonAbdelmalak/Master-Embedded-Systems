#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;

	printf("Enter a character: ");
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);

	return 0;
}
