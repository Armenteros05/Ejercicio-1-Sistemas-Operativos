#include <stdio.h>

#define SIZE 10

void rellenarArray(int arr[]) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
}

void modificarPosArray(int arr[], int pos, int value) {
    if(pos >= 0 && pos < SIZE) {
        arr[pos] = value;
    }
}

void mostrarArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];
    rellenarArray(arr);
    modificarPosArray(arr, 5, 100);
    mostrarArray(arr, SIZE);
    return 0;
}