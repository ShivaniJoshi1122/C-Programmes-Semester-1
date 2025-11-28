#include <stdio.h>
void printN(int n) {
    if (n == 0) return;
    printN(n - 1);
    printf("%d ", n);
}
int main() {
    printN(5);
    return 0;
}
