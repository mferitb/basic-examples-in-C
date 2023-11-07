#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,b,c,discriminant,root1,root2,root3;
	
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	printf("Enter value of A:");
	scanf("%d",&c);
	
	discriminant=b^2-4*a*c;
	
	root1=-b+pow(b^2-4*a*c,1/2);
	root2=-b-pow(b^2-4*a*c,1/2);
	root3=-b/2*a;
	
	if(discriminant>0){
		printf("There is 2 root.\n");
		printf("Root 1:%d\n",root1);
		printf("Root 2:%d",root2);
	}
	else if(discriminant==0){
		printf("There is 1 root.\n");
		printf("The root is:%d",root3);
	}
	else{
		printf("There is no root.");
	}
	return 0;
}
