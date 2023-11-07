#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num;
	int factorial=1;
	int i;
	
	printf("Enter a number to calculate factorial:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		factorial=factorial*i;
	}
	
	printf("factorial:%d",factorial);
	
	return 0;
}

