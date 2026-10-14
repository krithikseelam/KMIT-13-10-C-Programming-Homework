#include<stdio.h>
int main(){
        int n;
        int product = 1;
        printf("Enter a number: ");
        scanf("%d",&n);
        while(n>0){
                product = product*(n%10);  //extract the last digit of that number
                n = n/10;          //removing the last digit
        }
        printf("The product of digits: %d",product);
        return 0;
}



