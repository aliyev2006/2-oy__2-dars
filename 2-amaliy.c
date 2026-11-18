#include <stdio.h>

// Juft sonlar yigindisi
int sumEven(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            s += arr[i];
        }
    }
    return s;
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
    printf("Juft sonlar yigindisi: %d\n", sumEven(arr, n));
    return 0;
}
