#include <stdio.h>
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside function: %d %d\n", x, y);
}
int main() {
    int a = 5, b = 7;
    swap(a, b);
    printf("Outside function: %d %d", a, b);
    return 0;
}
