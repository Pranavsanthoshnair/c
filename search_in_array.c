/*
Author - Pranav S Nair
Date - 5/2/25
Purpose - TO search for an element in an array
*/
#include <stdio.h>

int main() {
    int num, i, limit, position = -1;
    
    printf("Enter number of elements in an array: ");
    scanf("%d", &limit);
    
    int arrnum[limit];        // declaring array
    
    printf("Enter the %d numbers: ", limit);
    for (i = 0; i < limit; i++) { 
        scanf("%d", &arrnum[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &num);
    
    for (i = 0; i < limit; i++) {
        if (arrnum[i] == num) {
            position = i;  
            break; 
        }
    }
    
    if (position != -1) {
        printf("Element found at position: %d\n", position+1);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

