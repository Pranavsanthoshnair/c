/*
Author - Pranav S Nair
Date - 26/3/25
Purpose - TO FIND POWER OF A NUMBER USING RECURSION
*/
#include<stdio.h>
int Power(int num,int exp){
    if(exp==0){
        return 1;
    }
    else if(exp==1){
        return num;
    }
    else{
        return num * Power(num,exp-1);
    }
}
int main(){
    int num,exp,x;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the exponent:");
    scanf("%d",&exp);
    x = Power(num,exp);
    printf("The power is :%d",x);
    return 0;
}
    
    

