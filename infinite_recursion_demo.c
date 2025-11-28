#include <stdio.h>
void test() {
    printf("Loop ");
    test();
}
int main() {
    test();
    return 0;
}
