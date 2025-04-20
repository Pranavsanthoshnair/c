#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number %d is even\n", num);
    } else {
        printf("The number %d is odd\n", num);
    }

    return 0;
}
