#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {

char strng[100],strng0[100];
printf("Enter a string : ");
scanf("%s",strng);
while(strlen(strng)>100){
    printf("ERROR! .. String length must not  exceed 100\nPlease try again");
    printf("Enter a string : ");
    scanf("%s",strng);
}

for(int i = strlen(strng)-1 ; i>=0 ; i--){
    strng0[i]=strng[strlen(strng)-1-i];
}
printf("Reversed string is : ");

for(int i = 0 ; i<strlen(strng) ; i++){
    printf("%c",strng0[i]);
}

}
