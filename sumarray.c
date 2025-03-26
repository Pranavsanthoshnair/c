/*
Author - Pranav S Nair
Date - 26/3/25
Purpose - TO FIND SUM OF ELEMENTS OF A NUMBER
*/
#include<stdio.h>
int sumArray(int arr[],int size){
    int i,sum=0;
    for(i = 0;i<size;i++){
        sum = sum+arr[i];
    }
    return sum;     
}
int main(){
    int size,x,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    x = sumArray(arr,size);
    printf("The sum is :%d",x);
    return 0;
}
    
        
        
  
