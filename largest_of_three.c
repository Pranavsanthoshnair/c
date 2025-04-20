/*
Pranav S Nair
Date - 29/1/25
Purpose - TO print output of largest of 3 numbers
*/
#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("Enter second number:");
  scanf("%d",&num2);
  printf("Enter third number:");
  scanf("%d",&num3);
  if(num1>num2){
    if(num1>num3){
      printf("%d is largest\n",num1);
    }else{
      printf("%d is largest\n",num3);
    }
  }
  else if(num2>num1){
    if(num2>num3){
      printf("%d is largest\n",num2);
    }else{
      printf("%d is largest\n",num3);
    }
  }
  else{
    printf("all numbers are equal");
  }
  return 0;
}


