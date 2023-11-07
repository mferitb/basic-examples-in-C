#include <stdio.h>
#include <stdlib.h>

int main() {
    int height, row, space, star;

    printf("Piramidin yuksekligini girin: ");
    scanf("%d",&height);

    for (row = 1; row <= height; row++) {
        for (space = 1; space <= height - row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
