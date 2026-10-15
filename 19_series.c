#include<stdio.h>
int main(){
	int count;
	for(int i = 1; i <= 4; i++){
		count = i;
		for(int j = 1; j <= 7; j++){
			if(i % 2 != 0 && j == 4 && count > 0){
				printf("* ");
				count--;
			}
			else if(i % 2 == 0 && j == 4){
				printf(" ");
			}
		}
	}
	return 0;	
}
