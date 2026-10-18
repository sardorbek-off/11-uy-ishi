#include <stdio.h>
#include <string.h>

int main() {
    char ism[50], familiya[50], login[100];
    scanf("%49s %49s", ism, familiya);

    login[0] = ism[0];
    login[1] = '\0';
    strcat(login, familiya);

    printf("%s\n", login);
}
