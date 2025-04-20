#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt","w");
    putc('A',fp);
    fclose(fp);
    fp = fopen("file.txt","r");
    char ch = getc(fp);
    printf("%c",ch);
    fclose(fp);
    return 0;
}
