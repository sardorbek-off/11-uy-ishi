#include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };
    int id;
    scanf("%d", &id);

    int indeks = binary_search(books, 12, id);

    if (indeks != -1) {
        printf("Kitob topildi!\n");
        printf("Indeks: %d\n", indeks);
    } else {
        printf("Kitob topilmadi\n");
    }
}
