#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",(*p+i));
    }
}