#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partician(int A[], int l, int h) {
    int pivot = A[l];
    int i = l;
    int j = h;

    while (i < j) {
        do {
            i++;
        } while (A[i] <= pivot && i < h);

        do {
            j--;
        } while (A[j] > pivot && j > l);

        if (i < j) {
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[l], &A[j]);
    return j;
}

void quikSort(int A[], int l, int h) {
    if (l < h) {
        int j = partician(A, l, h);
        quikSort(A, l, j);
        quikSort(A, j + 1, h);
    }
}

void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int A[] = {10, 411, 2, 5, 1, 3, 11, 9};
    int size = sizeof(A) / sizeof(A[0]);
    int l = 0, h = size;

    quikSort(A, l, h);

    printf("Sorted array:\n");
    printArray(A, size);
    return 0;
}
