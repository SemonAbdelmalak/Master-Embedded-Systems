#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Bin(int num);
int main() {
    int dec_num,res;
    printf("Input Number = ");
    scanf("%d",&dec_num);

    res = Bin(dec_num);
    printf("The value of the 4th LSB is : %d",res);



}   
int Bin(int num){
    int bin_num [32];
    int i = 0;
    while (num!=0){
        if(num%2==0){
            num/=2;
            bin_num[i]=0;
            
        }else{
            num-=1;
            num/=2;
            bin_num[i]=1;
        }
        i++;
    }
    int new_bin[32];
    printf("The binary number : ");
    printf("\n");
    for(int k = 0 ; k<=i-1 ;k++){
        new_bin[k] = bin_num[i-1-k];
        printf("%d",new_bin[k]);

    }
    printf("\n");
    return bin_num[3];

    
}
