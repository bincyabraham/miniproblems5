#include<stdio.h>
void main()
{
    int a=5;
    float b=3;
    char c='Z';
    int *ptr1=&a;
    float *ptr2=&b;
    char *ptr3=&c;
    printf("Value and Address of a:%d,%p\n",a,&a);
    printf("Value and Address of b:%.2f,%p\n",b,&b);
    printf("Value and Address of c:%c,%p\n",c,&c);
}