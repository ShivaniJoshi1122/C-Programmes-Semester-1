#include <stdio.h>
int main(){
    int n,f=1;
    scanf("%d",&n);
    if(n<2) f=0;
    for(int i=2;i*i<=n;i++) if(n%i==0) f=0;
    printf(f?"Prime":"Not Prime");
    return 0;
}