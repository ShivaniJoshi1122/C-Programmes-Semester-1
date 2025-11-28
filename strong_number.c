#include <stdio.h>
int fact(int x){int f=1;while(x){f*=x;x--;}return f;}
int main(){
    int n, sum=0, temp, d;
    scanf("%d",&n);
    temp=n;
    while(temp){
        d=temp%10;
        sum+=fact(d);
        temp/=10;
    }
    printf(sum==n?"Strong":"Not Strong");
    return 0;
}