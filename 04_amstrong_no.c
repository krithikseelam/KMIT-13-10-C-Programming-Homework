#include<stdio.h>
#include<math.h>
int main(){
	int number,temp;
	int sum = 0;
	printf("Number: \n");
	scanf("%d",&number);
	temp = number;
	while(temp > 0){
		sum += pow(temp%10,3);
		temp /= 10;
	}
	if(number == sum){
		printf("%d is an amstrong number!",number);
	}
	else{
		printf("%d is not an amstrong number!!",number);
	}
	return 0;
}
