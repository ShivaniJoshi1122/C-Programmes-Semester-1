#include <stdio.h>
void greet(){ printf("Hello"); }
int main(){
    void (*fp)() = greet;
    fp();
    return 0;
}