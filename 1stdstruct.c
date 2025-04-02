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
    student s[1];
        printf("Enter Your Name:");
        scanf("%s",s[1].name);
        printf("Enter Your Roll Number:");
        scanf("%d",&s[1].rollno);
        printf("Enter Your CGPA:");
        scanf("%f",&s[1].cgpa);  
        printf("\nName:%s",s[1].name);
        printf("\nroll number:%d",s[1].rollno);
        printf("\ncgpa:%f",s[1].cgpa);
    return 0;
}

