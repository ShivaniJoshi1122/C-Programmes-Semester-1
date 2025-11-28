#include <stdio.h>
int main(){
    int s,e;
    scanf("%d%d",&s,&e);
    for(int n=s;n<=e;n++){
        int f=1;
        if(n<2) continue;
        for(int i=2;i*i<=n;i++) if(n%i==0){f=0;break;}
        if(f) printf("%d ",n);
    }
    return 0;
}