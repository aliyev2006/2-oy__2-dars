#include <stdio.h>

// Ortacha qiymatdan kattalar
int countAboveAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = (double)sum / size;

    int k = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
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
    printf("Ortachadan katta elementlar soni: %d\n", countAboveAverage(arr, n));
    return 0;
}
