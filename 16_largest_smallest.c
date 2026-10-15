#include<stdio.h>
int main(){
        int number;
	int largest = 0;
	int smallest = 999;
	while(1){
		printf("Number: ");
		scanf("%d",&number);
		if(number == 0){
			break;
		}
		else if(largest < number){
			largest = number;
		}
		if(smallest > number){
			smallest = number;
		}
	}
	printf("largest: %d\n",largest);
	printf("Smallest: %d\n",smallest);
        return 0;
}

