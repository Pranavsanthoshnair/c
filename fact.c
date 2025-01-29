/*
Pranav S Nair
Date - 29/1/25
Purpose - to find factorial of a number 
*/
#include<stdio.h>
int main(){
  int num,orgnum,fact = 1;
  printf("Enter Number : ");
  scanf("%d",&num);
  orgnum = num;
  if(num>0){
    while(num>1){
      fact *= num;
      num -= 1;
    }
  }   
  else{
  printf("The number is negative");
  }
  printf("%d is the factorial of %d",fact,orgnum);
  return 0;
}
