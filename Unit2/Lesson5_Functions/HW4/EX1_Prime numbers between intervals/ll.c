#include <stdio.h>
#include <stdlib.h>
void Prime(int num1,int num2);
int main(void) {

    int num1,num2;
    printf("Enter two numbers(intervals): ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    Prime(num1,num2);
}
void Prime (int num1 ,int num2){
    printf("Prime numbers between %d and %d are:",num1,num2);
    int i ;
    for(i = num1 ; i<=num2 ; i++){
        int flag = 0;
        if(i > 1){
            for(int j =2 ; j<9;j++){
                if(i == j){

                    continue;
                }
                if(i%j == 0 || i==j ){
                    flag = 1 ;
                    break;
                    
                }
            }
        if(flag == 0){
            printf(" %d",i);
        }
        }  
    }
}
