#include <stdio.h>
int main(){
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==key){printf("Found at %d",m+1);return 0;}
        else if(key<a[m]) r=m-1;
        else l=m+1;
    }
    printf("Not found");
    return 0;
}