/* 
Author - Pranav S Nair
Date - 09/04/25
Purpose - to split odd and even numbers entered in a file
*/
#include<stdio.h>
void readFile(FILE *fp){
    int num;
    while(fscanf(fp,"%d",&num)==1){
        printf("%d ",num);
    }
    fclose(fp);
}
int main(){
    FILE *fp1,*fp2,*fp3;
    fp1 = fopen("ran.txt","r");
    fp2 = fopen("odd.txt","w");
    fp3 = fopen("even.txt","w");
    int num;
    while(fscanf(fp1,"%d",&num)==1){
        if(num%2==0){
            fprintf(fp3,"%d ",num);
        }
        else{
            fprintf(fp2,"%d ",num);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nInput text file contents :- ");
    fp1 = fopen("ran.txt","r");
    readFile(fp1);
    printf("\nOdd number text file contents :- ");
    fp2 = fopen("odd.txt","r");
    readFile(fp2);
    printf("\nEven number text file contents :- ");
    fp3 = fopen("even.txt","r");
    readFile(fp3);
    printf("\n");
    return 0;
}
