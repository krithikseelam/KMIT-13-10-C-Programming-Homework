#include<stdio.h>
int main(){
	int number,count = 0;
	printf("Number: \n");
	scanf("%d",&number);
	while(number != 1){
		if(number%2 == 0){
			number /= 2;
		}
		else{
			number = 3*number + 1;
		}
		count++;
	}
	printf("The number conjected to 1 after %d loops",count);
	return 0;
}

