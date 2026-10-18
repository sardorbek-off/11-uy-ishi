#include <stdio.h>

int chegirma(int narx) {
    return narx * 9 / 10;
}

int main() {
    int narxlar[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &narxlar[i]);

    for (int i = 0; i < 5; i++)
        printf("%d ", chegirma(narxlar[i]));
    printf("\n");
}
