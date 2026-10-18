#include <stdio.h>

void almashtir(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    almashtir(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
