/* Quickselect and quicksort implementation.
 *
 * Copyright 2016 Matthew Staehely
 */

#include "quickselect.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int left, int right, int pivot) {
    int pivotValue = arr[pivot];
    swap(&arr[pivot], &arr[right]);
    int storeIdx = left;
    for (int i = left; i < right; i++) {
        if (arr[i] < pivotValue) {
            swap(&arr[storeIdx], &arr[i]);
            storeIdx++;
        }
    }
    swap(&arr[right], &arr[storeIdx]);
    return storeIdx;
}

int quickselect(int arr[], int left, int right, int k) {
    if (left == right) {
        return left;
    }
    int pivot = left + (rand() % (right - left + 1));
    pivot = partition(arr, left, right, right);
    if (k == pivot) {
        return k;
    } else if (k < pivot) {
        return quickselect(arr, left, pivot - 1, k);
    } else {
        return quickselect(arr, pivot + 1, right, k);
    }
}

int main(int argv, char** argc) {
    int arr[10];

    for (int i = 9; i >= 0; i--) {
        arr[i] = 9 - i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d:%d ", i, arr[i]);
    }

    printf("\n");
    quickselect(arr, 0, 9, 6);

    printf("Pivot: 6, value: %d", arr[6]);
}
