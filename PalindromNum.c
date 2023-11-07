#include <stdio.h>
#include <stdlib.h>

int main() {
    int num , reversed = 0 , temp , digit;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }
    if (num == reversed) {
        printf("%d is a palindrom number.\n", num);
    } else {
        printf("%d is not a palindrom number.\n", num);
    }
    return 0;
}


