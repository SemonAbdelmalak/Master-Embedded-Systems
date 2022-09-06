#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n,num,flag=0;
int arr[10];
printf("Enter no of elements : ");
scanf("%d",&n);
while (n>10){
    printf("ERROR! .. Number of elements must not exceed 10\nTry again");
    printf("\nEnter no of elements : ");
    scanf("%d",&n);
}

for(int i = 0 ; i<n ; i++){
    scanf(" %d",&arr[i]);

}
printf("Enter the element to be searched : ");
scanf("%d",&num);

for(int i = 0 ; i<n ; i++){
    if(arr[i]==num){
        printf("Number found at the location = %d",i+1);
        flag = 0;
        break;
    }
    flag = 1;

}
if(flag){
    printf("The elemrnt %d is not located in the data base",num);
}


}
