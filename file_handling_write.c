#include <stdio.h>
int main(){
    FILE *fp = fopen("output.txt", "w");
    if(fp == NULL){ printf("Error"); return 0; }
    fprintf(fp, "Hello File!");
    fclose(fp);
    return 0;
}