#include<stdio.h>
#include<math.h>
int main(){
	int number, temp,divisor;
	int no_digits = 0;
	// automorphic number is 25 --> 25^2 = 625 last number is same as 25
	printf("Number: \n");
	scanf("%d",&number);
	temp = number;
	while(temp > 0){	
		no_digits++;
		temp /= 10;
	}
	divisor = pow(10,no_digits);
	if((number*number)%divisor == number){
		printf("%d is an automorphic number\n",number);
	}
	else{
		printf("%d is not an automorphic number!!\n",number);
	}
	return 0;
}

