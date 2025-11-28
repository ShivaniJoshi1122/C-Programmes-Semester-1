#include<stdio.h>
int main(){int r=5,st=1,sp=r-1;for(int i=1;i<=r;i++){for(int j=1;j<=sp;j++)printf(" ");for(int k=1;k<=st;k++)printf("*");sp--;st+=2;printf("\n");}}