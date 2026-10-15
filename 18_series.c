#include<stdio.h>
int main(){
	int i, j,count;
	for(i = 1; i <= 7; i++){
		if(i <= 4){
			for(j = 1; j <= i; j++){
				if((i%2 != 0 && j%2 != 0) || (i%2 == 0 && j%2 == 0 )){
					printf("* ");
				}
				else{
					printf("  ");
				}		
		}	}
		printf("\n");
	}
	return 0;
}
