#include<stdio.h>
int main(){
	int n1, n2;
	printf("Number1: \n");
	scanf("%d",&n1);
	printf("Number2: \n");
	scanf("%d",&n2);
	int lcm = n1*n2;
	for(int i = 1; i <= n2; i++){
		for(int j = 1;j <= n1; j++){
			if(i*n1 == j*n2 && lcm > i*n1){
				lcm = i*n1;
			}
		}
	}
	printf("LCM: %d",lcm);
	return 0;
}
