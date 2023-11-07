#include <stdio.h>
#include <stdlib.h>


int main() {
    int n,i;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

