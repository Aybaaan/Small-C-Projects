#include<stdio.h>

int main(){
	
	int i,num,ctr,val=0;
	
	printf("Prime numbers from 1 to 100000 are: \n");
	
	for(num=1; num<=100000;num++){
		ctr = 0;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				ctr++;
				break;
			}
		}	
		if(ctr==0 && num !=1){
		printf("%d\t", num);
		val++;
		}
	}
	printf("\n\nNumber of Prime Numbers: %d", val);
return 0;	
}
