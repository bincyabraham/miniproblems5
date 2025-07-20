#include<stdio.h>
void main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of x:%d\n",x);
    printf("Address of x:%p\n",&x);
    printf("Value at pointer p:%d\n",*p);
}