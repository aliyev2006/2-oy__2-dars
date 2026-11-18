#include <stdio.h>

// Manfiy sonlarni sanash
int countNegative(int arr[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            k++;
        }
    }
    return k;
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
    printf("Manfiy sonlar soni: %d\n", countNegative(arr, n));
    return 0;
}
