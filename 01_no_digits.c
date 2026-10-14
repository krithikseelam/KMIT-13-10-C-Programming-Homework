#include <stdio.h>

int main(){
    int number;
    int no_digits = 0;
    printf("Number: \n");
    scanf("%d",&number);
    while(number > 0){
        number = number/10;
        no_digits++;
    }
    printf("No of digits; %d\n",no_digits);
    
    return 0;
}