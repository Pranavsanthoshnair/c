#include<stdio.h>
int main(){
  char grade;
  printf("ENTER YOUR GRADE IN UPPERCASE:");
  scanf("%c",&grade);
  switch(grade){
  case 'E' :
    printf("Excellent\n");
    break;
  case 'V' : 
    printf("Very Good\n");
    break;
  case 'G' :
    printf("Good\n");
    break;
  case 'A' :
    printf("Average\n");
    break;
  case 'F' :
    printf("Fail\n");
    break;
  default :
    printf("No Grade Found\n");
  }
  return 0;
}
    

