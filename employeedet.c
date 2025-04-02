/*
Author - Pranav S Nair
Date - 02/04/2025
Purpose - To store details of employees in a struct
*/
#include<stdio.h>
typedef struct{
    char name[50];
    int id;
    float salary;
}student;
int main(){
    int limit;
    student s[limit];
    printf("Enter number of employees:");
    scanf("%d",&limit);
    for(int i=0;i<=limit-1;i++){
        printf("Enter Employees Name:");
        scanf("%s",s[i].name);
        printf("Enter Employee ID:");
        scanf("%d",&s[i].id);
        printf("Enter Salary of Employee:");
        scanf("%f",&s[i].salary);
    }   
    for(int i=0;i<=limit-1;i++){
        printf("\nName:%s",s[i].name);
        printf("\nemployee id:%d",s[i].id);
        printf("\nsalary:%f",s[i].salary);
    }
    return 0;
}

    
    
