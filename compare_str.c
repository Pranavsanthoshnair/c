/*
Author - Pranav S Nair
Date - 19/02/2025
Purpose - To cmp 2 strings and find if they are equal or not
*/
#include<stdio.h>
#include<string.h>
int main(){
  char str1[50],str2[50];
  printf("Enter first string:");
  scanf("%s", str1);
  printf("Enter second string:");
  scanf("%s", str2);
  if(strcmp(str1,str2)==0){
    printf("Strings are equal.");
  }
  else{
    printf("Strings are not equal.");
  }
  return 0;
}
    
  
