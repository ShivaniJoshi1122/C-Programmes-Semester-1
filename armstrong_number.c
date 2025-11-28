#include<stdio.h>
#include<math.h>
int main(){int n,o,r,sum=0,c=0;scanf("%d",&n);o=n;while(o){o/=10;c++;}o=n;while(o){r=o%10;sum+=pow(r,c);o/=10;}if(sum==n)printf("Armstrong");else printf("Not");}