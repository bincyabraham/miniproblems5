#include <stdio.h>
#include <stdlib.h>
void main() {
    int* arr = (int*)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
    }
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    printf("Dynamic Memory Allocation:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Element %d: Value = %d, Address = %p\n", i, arr[i],&arr[i]);
    }
    free(arr);
}