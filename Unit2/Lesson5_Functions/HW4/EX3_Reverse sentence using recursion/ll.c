#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Reverse (char sentc[] , int len);
int main(void) {

    char sentc [100];
    int len;
    printf("Enter a sentence: ");
    gets(sentc);
    len = strlen(sentc);
    Reverse(sentc,len);

}
void Reverse(char sentc[],int len){
    if(len>0){
        printf("%c",sentc[len-1]);
        Reverse(sentc,--len);

    }
    

}


