#include<stdio.h>
int main(){int r=3;for(int i=0;i<r;i++){for(int s=0;s<r-i;s++)printf(" ");for(int j=0;j<=i;j++)printf("*");printf("\n");}}