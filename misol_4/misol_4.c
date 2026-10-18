#include <stdio.h>

int main() {
    int orindiq[3][4], qator, joy;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &orindiq[i][j]);
    scanf("%d %d", &qator, &joy);

    if (qator < 1 || qator > 3 || joy < 1 || joy > 4) {
        printf("Bunday o'rindiq yo'q\n");
    } else if (orindiq[qator - 1][joy - 1] == 0) {
        printf("%d-qator, %d-orindiq: Bosh\n", qator, joy);
    } else {
        printf("%d-qator, %d-orindiq: Band\n", qator, joy);
    }
}
