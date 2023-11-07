#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num<=1) {
        printf("%d is not prime.\n",num);
    } else {
        int i;
        for (i=2 ; i*i<=num ; i++) {
            if (num%i == 0) {
                printf("%d is not prime.\n", num);
                break;
            }
        }
        if (i*i > num) {
            printf("%d is prime.\n",num);
        }
    }
    	return 0;
}

