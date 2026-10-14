#include<stdio.h>
int main(){
        int n;
	int sum = 0,even = 0,odd = 0;
        printf("Enter a number: ");
        scanf("%d",&n);
        while(n>0){
		if((n%10)%2 == 0){
			even++;
		}
		else{
			odd++;
		}
		n/=10;
        }
	printf("Even: %d \t\t Odd: %d",even,odd);
        return 0;
}


