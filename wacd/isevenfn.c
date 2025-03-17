/*
Author - Pranav S Nair
Date - 17/03/25
*/
#include<stdio.h>
void isEven(int);
int main(){
    int n;int num;
    printf("Enter number");
    scanf("%d",&n);
    isEven(num);
    return 0;
}
void isEven(int num){
    int n;
    if(num % 2 == 0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",n);
    }
}
