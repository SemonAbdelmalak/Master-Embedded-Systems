#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 0;

	printf("Enter an integer you want to check: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is even\n",num);
    }else{
        printf("%d is odd\n",num);
    }

	return 0;
}
