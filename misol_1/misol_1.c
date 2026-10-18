#include <stdio.h>

int main() {
    int orindiq[10], raqam;

    for (int i = 0; i < 10; i++)
        scanf("%d", &orindiq[i]);
    scanf("%d", &raqam);

    if (raqam < 1 || raqam > 10)
        printf("Bunday o'rindiq yo'q\n");
    else if (orindiq[raqam - 1] == 0)
        printf("Joy mavjud\n");
    else
        printf("Joy band\n");
}
