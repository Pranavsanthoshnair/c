/*
Author - Pranav S Nair
Date - 17/03/25
Purpose - To remove the largest element in an array[]
*/
#include<stdio.h>
int passArray(int[],int);
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements");
    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
int passArray(array,n);
int largest;
printf("Largest=%d",largest);
return 0;
}
int passArray(int array[],int size){
int largest;
    for (int i= 0;i<size;i++){
        if(array[i]>largest){
            largest = array[i];
        }
    }
    return largest;
}
