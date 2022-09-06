#include <stdio.h>
#include <stdlib.h>

int main(void) {

int r , c;
int arr[100][100],arr_0[100][100];
printf("Enter rows and columns of matrix: ");
scanf("%d %d",&r,&c);
if(r >99 || c >99){
    printf("Invalid input, Please try again");
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&r,&c);
}
printf("Enter elements of matrix:\n");
for(int i=0 ; i<r ; i++){
    for(int j =0 ; j<c ; j++){
        printf("Enter element a%d%d: ",i+1,j+1);
        scanf("%d",&arr[i][j]);


    }
}
printf("Enterd Matrix\n");
for(int i=0 ; i<r ; i++){
    for(int j =0 ; j<c ; j++){
        printf("%d ",arr[i][j]);
        arr_0[j][i]=arr[i][j];
    }
    printf("\n");
}
for(int j=0 ; j<c ; j++){
    for(int i=0 ; i<r ;i++){
        printf("%d ",arr_0[j][i]);
    }
    printf("\n");

}
}
