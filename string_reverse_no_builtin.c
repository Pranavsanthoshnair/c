/*
Author - Pranav S Nair
Date - 19/02/2025
Purpose - To print reverse of a string without inbuilt functions.
*/
#include<stdio.h>
int main(){
    char str[50],temp;
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i,l,j;
    for(i=0;str[i]!='\0';i++);
    l=i-1;
    for(j=0;j<=l;j++){
        temp=str[l];
        str[l]=str[j];
        str[j]=temp;
        l--;
    }
    printf("Reverse of the string: ");
    puts(str);
    return 0;
}
