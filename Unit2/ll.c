#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int count = -1;
    int maxx = -1;
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int z = log2(n);
    for(int i = z ; i>=0;i--){
        if(n >= pow(2,i)){
            if(count==-1){
                count = 1;
                n = n -pow(2,i);
            }else{
                count++;
                n = n -pow(2,i);
            }
        }else{
            maxx = maxx > count ? maxx : count;
            count=-1;
        }
    }
    maxx = maxx > count ? maxx : count;

    printf("The max number of ones between two zeros is : ");
    printf("%d",maxx);
    
}