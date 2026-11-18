#include <stdio.h>

// Berilgan sondan kattalar
int countGreater(int arr[], int size, int x) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            k++;
        }
    }
    return k;
}

int main() {
    int n, x;
    int arr[100];
    printf("Massiv olchamini kiriting: ");
    scanf("%d", &n);
    printf("Elementlarni kiriting: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sonni kiriting: ");
    scanf("%d", &x);
    printf("%d dan katta elementlar soni: %d\n", x, countGreater(arr, n, x));
    return 0;
}
