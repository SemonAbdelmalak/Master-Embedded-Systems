#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Swap(char a [],int len1,char b[],int len2);

int main() {

    char a[50],b[100];
    printf("Please enter the first array : ");
    gets(a);
    int len1 = strlen(a);
    printf("Please enter the first array : ");
    gets(b);
    int len2 = strlen(b);
    Swap(a,len1,b,len2);


    return 0;

}
void Swap(char a[], int len1,char b[],int len2){
    char temp_arr[100];
    int i;
    for( i=0 ; i<100 ; i++){
        temp_arr[i]=a[i];
        a[i]=b[i];
        b[i]=temp_arr[i];
    }
    printf("\nThe first array after swapping is : ");
    i=0;
    while (a[i]!=0)
    {   printf("%c",a[i]);
        i++;
        
    }
    printf("\nThe second array after swapping is : ");
    i=0;
    while (b[i]!=0)
    {   printf("%c",b[i]);
        i++;
        
    }

}
