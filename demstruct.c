/*
Author - Pranav S Nair
Date - 02/04/2025
Purpose - To store details of students in a struct
*/
#include<stdio.h>
typedef struct{
    char name[50];
    int rollno;
    float cgpa;
}student;
int main(){
    student s[10];
    int limit;
    printf("Enter number of students:");
    scanf("%d",&limit);
    for(int i=0;i<=limit-1;i++){
        printf("Enter Your Name:");
        scanf("%s",s[i].name);
        printf("Enter Your Roll Number:");
        scanf("%d",&s[i].rollno);
        printf("Enter Your CGPA:");
        scanf("%f",&s[i].cgpa);
    }   
    for(int i=0;i<=limit-1;i++){
        printf("\nName:%s",s[i].name);
        printf("\nroll number:%d",s[i].rollno);
        printf("\ncgpa:%f",s[i].cgpa);
    }
    return 0;
}

    
    
