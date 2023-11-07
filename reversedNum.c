#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int num,reversedNum=0,digit;
	
	printf("Enter a multi-digit number:");
	scanf("%d",&num);
	
	while(num!=0){
		digit=num%10;
		reversedNum=reversedNum*10+digit;
		num=num/10;
	}
		printf("reverse of your number is:%d",reversedNum);
	
	return 0;
}
