#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char let;
    int flag = 0;

	printf("Enter an alphabet : ");
    scanf("%c",&let);
    char vowel[] = "aeiouAEIOU";
    for(int i = 0 ;i < 10 ; i++){
        if(let == vowel[i]){
            flag++;
            break;
        }
    }
    if(flag == 1){
        printf("%c is vowel",let);
    }else{
        printf("%c is a consonant",let);
    }

}
