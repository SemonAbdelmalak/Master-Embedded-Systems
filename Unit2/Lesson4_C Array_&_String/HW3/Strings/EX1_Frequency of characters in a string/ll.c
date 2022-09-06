#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {

char ch,small='a',capital='A';
char strng[100];
int frq = 0,diff;
diff = small - capital;
printf("Enter a string: ");
gets(strng);
while(strlen(strng)>100){
    printf("ERROR! .. String length must not  exceed 100\nPlease try again");
    printf("Enter a string: ");
    gets(strng);
}
printf("Enter a character to find frequency: ");
scanf("%c",&ch);
for(int i = 0 ; i<strlen(strng) ; i++){
    if(strng[i] == ch || strng[i]== ch+diff || strng[i] == ch-diff){
        frq+=1;
    }

}
printf("Frequency of %c = %d",ch,frq);

}
