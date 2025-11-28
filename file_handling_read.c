#include <stdio.h>
int main(){
    FILE *fp = fopen("output.txt", "r");
    if(fp == NULL){ printf("Error"); return 0; }
    char ch;
    while((ch = fgetc(fp)) != EOF) printf("%c", ch);
    fclose(fp);
    return 0;
}