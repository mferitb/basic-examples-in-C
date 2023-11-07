#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
		int count=0;
        int num;
        int i;
        
        for(num=2 ; num<10000 ; num++){
            int sum=1;
            
            for(i=2 ; i<=num/2 ; i++){
                if(num%i==0){
                    sum+=i;
                }
            }
            if(sum==num){
                printf("%d\n",num);
                count++;
                if(count==4){
                    break;
                }
            }
        }	
			return 0;
}
