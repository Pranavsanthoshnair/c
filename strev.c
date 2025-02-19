#include<stdio.h>
int main(){
    char str[50],temp;
    printf("Enter a string:");
    scanf("%s", str);
    int i,l,j;
    for(i=0;str[i]!='\0';i++);
    l=i-1;
    for(j=0;j<=l/2;j++){
        temp=str[l];
        str[l]=str[j];
        str[j]=temp;
        l--;
    }
    printf("Reverse of the string: ");
    puts(str);
    return 0;
}

