/*
Author - Pranav S Nair
Date - 26/3/25
Purpose - TO FIND AREA OF CYLINDER
*/
#include<stdio.h>
# define PI 3.14159
# define AreaCircle PI*r1*r1
# define AreaCylinder PI*r2*2*h + 2*PI*r2*r2
int main(){
    int r1,r2,areaci,areacy,h;
    printf("Enter radius of circle:");
    scanf("%d",&r1);
    areaci = AreaCircle;
    printf("The area of the circle is :%d",areaci);
    printf("\nEnter radius of cylinder:");
    scanf("%d",&r2); 
    printf("Enter height of cylinder:");
    scanf("%d",&h);
    areacy = AreaCylinder;
    printf("The area of the cylinder is :%d",areacy);
    return 0;
}
    
    
    
    
    
    

