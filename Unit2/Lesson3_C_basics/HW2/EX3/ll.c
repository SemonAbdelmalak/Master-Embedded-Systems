#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3;

	printf("Enter three numbers : ");
    scanf("%f\n%f\n%f",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("Largest number = %.2f\n",num1);
        }
    }else if(num2>num1){
        if(num2>num3){
            printf("Largest number = %.2f\n",num2);

        }
    }else{
        printf("Largest number = %.2f\n",num3);
    }

}
