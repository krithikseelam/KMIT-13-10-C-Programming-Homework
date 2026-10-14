#include<stdio.h>
int main(){
	long long number , temp;
	int digit, max = 0;
	int no_of_digits = 0;
	int i = 0;
	printf("Give a number: ");
	scanf("%lld",&number);
	temp = number;
	while (temp > 0){
		temp = temp/10;
		no_of_digits++;
	}
	while(i < no_of_digits){
		digit = number%10;
		number = number/10;
		if (max < digit){
			max = digit;
		}
		i++;
	}
	printf("%d is the largest digit",max);

	return 0;
}

