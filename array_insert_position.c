#include <stdio.h>
int main(){
    int n,pos,val;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&val,&pos);
    if(pos<1||pos>n+1){printf("Invalid");return 0;}
    for(int i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val;
    n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}