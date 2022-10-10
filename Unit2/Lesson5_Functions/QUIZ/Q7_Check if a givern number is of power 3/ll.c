#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int PowerThree(int num);

int main() {

    int num;
    printf("Input: ");
    scanf("%d",&num);
    printf("==>\n%d",PowerThree(num));
    return 0;
}   
PowerThree(int num){
    int new_num=3;
    if(num%3 == 0){
        while(new_num<num ){
            new_num = 3*new_num;
        }
    }
    if(new_num>num || num%3!=0){
        return 1;
    }else{
        return 0;
    }
    
}
