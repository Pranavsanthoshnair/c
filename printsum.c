#include <stdio.h>
int main(){
  float number1,number2;
  float sum;
  printf("\n Enter Two integer numbers : ");
  scanf("%f%f",&number1,&number2);
  sum = number1 + number2;
  printf("%f+%f=%f\n",number1,number2,sum);
  
  return 0;
}

