// A C program to print the lower case letter of any upper case letter
#include<stdio.h>
int main(){
  char value;
  printf("\nEnter a character in capital letter:");
  value = getchar();
  value = value + 32;
  printf("Lower case letter : %c\n",value);
  return 0;
}
