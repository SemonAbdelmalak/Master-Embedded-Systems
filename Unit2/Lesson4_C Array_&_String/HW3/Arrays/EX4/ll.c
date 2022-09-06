#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n,num,loc;
int arr[11],temp[10];
printf("Enter no of elements : ");
scanf("%d",&n);
while (n>10){
    printf("ERROR! .. Number of elements must not exceed 10\nTry again");
    printf("\nEnter no of elements : ");
    scanf("%d",&n);
}

for(int i = 0 ; i<n ; i++){
    scanf(" %d",&arr[i]);
    temp[i]=arr[i];

}
printf("Enter the element to be inserted : ");
scanf("%d",&num);
printf("Enter the location : ");
scanf("%d",&loc);
arr[loc-1] = num;
for(int i = loc ; i<n+1 ; i++){
    arr[i] = temp[i-1];
}
for( int i=0 ; i<n+1 ; i++){
    printf("%d ",arr[i]);
}

}
