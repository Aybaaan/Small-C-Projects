#include<stdio.h>

int flag;

int ackermann(int x, int y){
	flag++;
	if(y==0)
	return ackermann(x-1,1);
	
	else if(x==0)
		return y+1;

	else
	return ackermann(x-1,ackermann(x,y-1));
}

main(){
	for(;;){
		int x, y;
		printf("X must be less than 4\nEnter 2 values (x and y respectively): ");
		scanf ("%d %d", &x, &y);
		
		if (x == 4 && y == 0){
			int result = ackermann (x,y);
	 		printf("%d\n\n", result);
		}else if (x < 4){
			int result = ackermann (x,y);
	 		printf("%d\n\n", result);
		}else{
		printf("Unable to print value.\n\n");
		}
	}	
}


