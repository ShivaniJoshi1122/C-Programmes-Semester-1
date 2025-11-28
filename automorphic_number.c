#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int sq=n*n, temp=n;
    while(temp){
        if(temp%10 != sq%10){ printf("Not Automorphic"); return 0; }
        temp/=10; sq/=10;
    }
    printf("Automorphic");
    return 0;
}