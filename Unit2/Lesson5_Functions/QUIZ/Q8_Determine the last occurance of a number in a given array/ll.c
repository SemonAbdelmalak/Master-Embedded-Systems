#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Last (int arr[] , int len , int num);
int main() {

    int arr[50];
    int len,num,res ;

    printf("Enter the number of array elememts : ");
    scanf("%d",&len);
    for(int i = 0 ; i<len ;i++){
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to determine it's last occurance : ");
    scanf("%d",&num);
    
    res = Last(arr,len,num);
    if(res==-1){
        printf("Element is not in the array\n");
    }else{
        printf("The result is : %d\n",res);
    }
}   
int Last (int arr[] , int len , int num){
    int count = 0 , flag = 0;
    for (int i = 0; i < len; i++){
        if(arr[i]==num){
            count = i;
            flag = 1;
        }   
    }
    if(flag == 0){
        return -1;
    }else{
        return count;
    }
    
}

