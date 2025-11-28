#include <stdio.h>
void rev(int n) {
    if (n == 0) return;
    printf("%d ", n);
    rev(n - 1);
}
int main() {
    rev(5);
    return 0;
}
