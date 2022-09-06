#include <stdio.h>
#include <stdlib.h>

int main(void) {

char strng[100];
int len = 0;
printf("Enter a string: ");
scanf("%s",strng);
while(strng[len] != '\0'){
    len++;
}
printf("Length of string: %d",len);

}
