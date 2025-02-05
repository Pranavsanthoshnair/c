/* 
Pranav S Nair
5/2/25
Purpose - To find max and min in an array and find their respective position
*/
#include <stdio.h>
int main() {
    int num, i;
    int max, min;
    int max_pos, min_pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num]; 
    printf("Enter the elements of the array: \n");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];       
    min = arr[0];
    max_pos = 0;
    min_pos = 0;
    for(i = 1; i < num; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }
    printf("Maximum value is %d at position %d\n", max, max_pos + 1);
    printf("Minimum value is %d at position %d\n", min, min_pos + 1);
    return 0;
}

