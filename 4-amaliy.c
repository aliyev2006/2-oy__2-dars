#include <stdio.h>

// Musbat sonlarni chiqarish
void printPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    int arr[100];
    printf("Massiv olchamini kiriting: ");
    scanf("%d", &n);
    printf("Elementlarni kiriting: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Musbat sonlar: ");
    printPositive(arr, n);
    return 0;
}
