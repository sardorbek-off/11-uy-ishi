#include <stdio.h>

int main() {
    int summa, katta = 0;
    FILE *f = fopen("xaridlar.txt", "r");

    if (f != NULL) {
        for (int i = 0; i < 5; i++) {
            fscanf(f, "%d", &summa);
            if (summa > 50000) katta++;
        }
        fclose(f);
        printf("Katta xaridlar soni: %d\n", katta);
    } else {
        printf("xaridlar.txt fayli topilmadi\n");
    }
}
