#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1=0 , num2=0 , result=0;
    char cha;
	printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&cha);
    printf("Enter two operands: ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    switch (cha)
    {
    case '+':
        result = num1 = num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    }
    printf("%f %c %f = %f",num1,cha,num2,result);




}
