#include<stdio.h>
int main(){
  int num,mod;
  printf("Enter number:");
  scanf("%d",&num);
  if(num>0){
    mod = num;
  }else{
    mod = -num;
  }
  printf("modulus is %d\n",mod);
  return 0;
}
    
