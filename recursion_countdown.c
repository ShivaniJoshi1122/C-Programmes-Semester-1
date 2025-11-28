#include <stdio.h>
void down(int n) {
    if (n == 0) return;
    printf("%d ", n);
    down(n - 1);
}
int main() {
    down(5);
    return 0;
}
