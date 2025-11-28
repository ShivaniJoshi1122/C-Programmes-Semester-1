#include <stdio.h>
int main(){
    int b,e,res=1;
    scanf("%d%d",&b,&e);
    for(int i=0;i<e;i++) res*=b;
    printf("%d",res);
    return 0;
}