#include <stdio.h>
int main(){
    int n, sum=0, temp;
    scanf("%d",&n);
    temp=n;
    while(temp){ sum+=temp%10; temp/=10; }
    printf(n%sum==0?"Harshad":"Not Harshad");
    return 0;
}