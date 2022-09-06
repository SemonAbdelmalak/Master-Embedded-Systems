#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n ;
float arr[2]={0,0};
printf("Enter the number of data: ");
scanf("%d",&n);
for(int i=0 ; i<n ; i++){
    printf("Enter number: ");
    scanf("%f",&arr[1]);
    arr[0]=arr[0]+arr[1];

}
printf("Averge = %.2f",arr[0]/n);
}
