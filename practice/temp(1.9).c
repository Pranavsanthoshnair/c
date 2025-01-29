#include<stdio.h>
int main(){
  int temp;
  printf("Enter Temperature :");
  scanf("%d",&temp);
  if(temp<=0){
    printf("Freezing Weather");
  }else if(temp>0 && temp<10){
    printf("Very Cold Weather");
  }else{
    printf("Cold Weather");
  }return 0;
}
    
