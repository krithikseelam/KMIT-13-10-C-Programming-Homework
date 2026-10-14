#include<stdio.h>
int main(){
	int number,sum = 0;
	printf("Number: \n");
	scanf("%d",&number);
	int square = number*number;
	while(square > 0){
		sum += square%10;
		square /= 10;
	}
	if(sum == number){
		printf("%d is a neon number\n",number);
	}
	else{
		printf("%d is not a neon number!!\n",number);
	}
	return 0;	
}
