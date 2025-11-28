#include<stdio.h>
int main(){int n,f,l,temp,rev=0;scanf("%d",&n);l=n%10;f=n;while(f>=10)f/=10;printf("%d %d",f,l);}