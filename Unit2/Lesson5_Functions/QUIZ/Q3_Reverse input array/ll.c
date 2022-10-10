#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Reverse(int arr [],int len);

int main() {

    int arr[100];
    printf("Input: ");
    int i;
    i=0;
    do{
        scanf("%d",&arr[i]);
        i++;
    }while (getchar()==',');
    Reverse(arr,i);
    
}   
void Reverse(int arr [],int len){
    printf("Output: ");
    for(int i = len-1 ; i>=0 ; i--){
        printf("%d",arr[i]);
        if(i!=0){
            printf(",");
        }

    }

}
