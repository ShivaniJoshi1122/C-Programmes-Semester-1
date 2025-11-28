#include<stdio.h>
int main(){char c;int age;scanf(" %c",&c);if(c=='I'||c=='i'){scanf("%d",&age);if(age>=18)printf("Eligible");else printf("Not eligible");}else printf("Not Indian");}