#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Bin(int num , int pos);
int main() {
    int dec_num,pos;
    printf("Input Number = ");
    scanf("%d",&dec_num);
    printf("Bit position = ");
    scanf("%d",&pos);
    printf("==>\n");
    Bin(dec_num ,pos);


}   
void Bin(int num , int pos){
    int bin_num [50];
    int i = 0,new_num = 0,weight = 1;
    printf("result = ");
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
    bin_num[i-pos-1]=0;
    for (int j = i-1 ; j>=0 ; j--){
        new_num = bin_num[j]*weight+new_num;
        weight *=2;
    }
    printf("%d",new_num);

    
}
