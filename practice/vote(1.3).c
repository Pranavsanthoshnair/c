#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Congratulation! You are eligible for casting your vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote.\n");
    }
    return 0;
}
