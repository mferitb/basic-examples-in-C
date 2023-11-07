#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int guess;
	int count;
	int randomNum = rand();
	
	srand(time(NULL));
    randomNum=rand() % 100 + 1;
    
	 do {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        count++;

        if (guess < randomNum) {
            printf("Enter higher number.\n");
        } else if (guess > randomNum) {
            printf("Enter lower number.\n");
        } else {
            printf("Congrats! your %d.guess is true.\n", count);
        }
    } while (guess != randomNum);
    
	return 0;
    
}
