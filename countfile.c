/* 
Author - Pranav S Nair
Date - 09/04/25
Purpose - to calculate no of words, characters, lines in a file
*/
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    fp = fopen("counter.txt", "r");            // change file name accordingly.
    while (fscanf(fp,"%c",&ch)==1) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '.') {
            words++;
        }
    }
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    printf("Lines: %d\n", lines);
    fclose(fp);
    return 0;
}

