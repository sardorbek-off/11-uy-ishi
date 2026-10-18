#include <stdio.h>

void sanoq(int n) {
    if (n >= 1) {
        printf("%d\n", n);
        sanoq(n - 1);
    } else {
        printf("Xabar yuborildi!\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sanoq(n);
}
