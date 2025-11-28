#include <stdio.h>
int main(){
    int x=10;
    int *p=&x;
    int **pp=&p;
    printf("%d %d %d", x, *p, **pp);
    return 0;
}