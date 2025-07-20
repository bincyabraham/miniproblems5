#include <stdio.h>
void main() {
    int arr[3] = {1, 2, 3};
    printf("Static Memory Allocation:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Element %d: Value = %d, Address = %p\n", i, arr[i],&arr[i]);
    }
}