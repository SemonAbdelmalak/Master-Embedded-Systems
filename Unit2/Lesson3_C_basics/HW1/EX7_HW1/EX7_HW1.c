#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1=0,num2=0,temp=0;

	printf("Enter value of a: ");
    scanf("%f",&num1);
    printf("Enter value of b: ");
	scanf("%f",&num2);
    num1 = num1 + num2;
    num2 = num1-num2;
    num1= num1-num2;

    printf("\n\n");
	printf("After swapping, value of a = %f",num1);
    printf("\nAfter swapping, value of b = %f\n",num2);

	return 0;
}
