#include<stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    int sum = 0;
    printf("Enter the numbers:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}