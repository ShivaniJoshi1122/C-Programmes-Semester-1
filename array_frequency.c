#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n], freq[n];
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); freq[i]=0; }
    for(int i=0;i<n;i++){
        if(freq[i]==-1) continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++; freq[j]=-1;
            }
        }
        freq[i]=count;
    }
    for(int i=0;i<n;i++)
        if(freq[i]!=-1) printf("%d occurs %d times
",a[i],freq[i]);
    return 0;
}