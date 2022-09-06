#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float mtrx_2[2][2],mtrx_1[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ;j++){
            printf("Enter a%d%d : ",i+1,j+1);
            scanf("%f",&mtrx_1[i][j]);
        }
        

    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ;j++){
            printf("Enter a%d%d : ",i+1,j+1);
            scanf("%f",&mtrx_2[i][j]);
        }
        
    }
    for(int i = 0 ; i<2 ;i++){
        for(int j=0 ; j<2 ;j++){
            mtrx_2[i][j]=mtrx_2[i][j]+mtrx_1[i][j];
            printf("%.1f ",mtrx_2[i][j]);
        }
        printf("\n");
    }



}
