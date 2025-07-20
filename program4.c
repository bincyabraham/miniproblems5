#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *ptr1=&a[0];
    int *ptr2=&a[3];
    int diff=ptr2-ptr1;
    printf("Difference:%d\n",diff);
}