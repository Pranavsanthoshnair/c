#include <stdio.h>
struct Student {
    char name[50];
    int rn;
    float marks[3];
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    float sub[3] = {0};
    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &s[i].rn);
        printf("Enter marks for 3 subjects: ");
        float total = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
            sub[j] += s[i].marks[j];
        }
        float average = total / 3;
        printf("Total Marks: %.2f, Average Marks: %.2f\n", total, average);
    }
    printf("\nAverage marks for each subject:\n");
    for (int j = 0; j < 3; j++) {
        printf("Subject %d average: %.2f\n", j + 1, sub[j] / n);
        printf("Subject %d total marks: %.2f\n", j + 1, sub[j]);
    }
    return 0;
}

