#include<stdio.h>
int main(){int n,o,r=0;scanf("%d",&n);o=n;while(n){r=r*10+n%10;n/=10;}if(o==r)printf("Palindrome");else printf("Not");}