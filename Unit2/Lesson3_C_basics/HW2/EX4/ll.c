#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;

	printf("Enter a number : ");
    scanf("%f",&num);
    if(num>0){
        printf("%.2f is positive",num);
    }else if(num<0){
        printf("%.2f is negtive",num);

    }else{
        printf("You entered zero");
    }

}
