#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char usr_name [] = "Semon Joseph";
int len ;

void Same (char strng[]);
int main(void) {

    char strng[100]; //only 100 characters is allowed
    printf("Please enter your username: ");
    gets(strng);
    Same(strng);
    return 0;

}
void Same (char strng []){
    len = strlen(usr_name);
    
    int flag = 0;
    for (int i = 0;i<len;i++){
        if(strng[i]==usr_name[i]){
            continue;
        }else{
            printf("The username you entered is incorrect\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The username you entered is correct\n");
    }
}


