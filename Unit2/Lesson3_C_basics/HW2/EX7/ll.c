#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,fact = 1;
	printf("Enter an integer : ");
    scanf("%d",&num);
    if(num < 0 ){
        printf("Error!!! Factorial of negative number doesn't exist.");

    }
    for(int i = 1; i<=num ; i++ ){
        fact*=i;
    }
    printf("Factorial = %d",fact);



}
