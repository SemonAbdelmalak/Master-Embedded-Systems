#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char cha;
	printf("Enter a character : ");
    scanf("%c",&cha);

    if ((int)cha >=65 && (int)cha <=122 ){
        printf("%c is an alphabet",cha);
    }else{
        printf("%c is not an alphabet",cha);

    }


}
