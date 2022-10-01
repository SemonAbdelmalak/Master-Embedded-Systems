#include <stdio.h>
#include <stdlib.h>
int power (int num , int pow , int result);
int main(void) {

    int num,pow;
    printf("Enter base number: ");
    scanf("%d",&num);
    printf("Enter power number(Positive integer): ");
    scanf("%d",&pow);
    printf("%d^%d = %d",num,pow,power(num,pow,num));
}
int power(int num , int pow, int result){
    if(pow>1){
        result *=num;
        pow--;
        power(num,pow,result) ;   
    }else if(pow == 1){
        return result;
    }
}

