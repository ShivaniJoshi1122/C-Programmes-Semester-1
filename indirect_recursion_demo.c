#include <stdio.h>
void fun2();
void fun1() {
    printf("A ");
    fun2();
}
void fun2() {
    printf("B ");
    fun1();
}
int main() {
    fun1();
    return 0;
}
