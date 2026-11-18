#include <stdio.h>

// Massivdagi nol elementlar
int countZero(int arr[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
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
    printf("Nollar soni: %d\n", countZero(arr, n));
    return 0;
}
