#include <stdio.h>
#include <stdlib.h>
int factorial (int num , int fact);
int main(void) {

    int num,x;
    printf("Enter an positive integer: ");
    scanf("%d",&num);
    x= factorial(num,1);
    printf("Factorial of %d = %d",num,x);
}

int factorial(int num,int fact){
    
    if (num>1){
        fact = num*fact;
        num = num-1;
        factorial(num,fact);


        
    }else if(num==1){
        return fact;

    }


}
