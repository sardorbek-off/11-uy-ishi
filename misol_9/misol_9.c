#include <stdio.h>

struct Xodim {
    char ism[50];
    int soat;
};

int main() {
    struct Xodim xodimlar[100];
    int n;
    FILE *f = fopen("xodimlar.txt", "r");

    if (f != NULL) {
        fscanf(f, "%d", &n);
        if (n > 100) n = 100;
        for (int i = 0; i < n; i++)
            fscanf(f, "%49s %d", xodimlar[i].ism, &xodimlar[i].soat);
        fclose(f);

        for (int i = 0; i < n; i++)
            printf("%s: %d som\n", xodimlar[i].ism, xodimlar[i].soat * 15000);
    } else {
        printf("xodimlar.txt fayli topilmadi\n");
    }
}
