#include<stdio.h>
void main()
{
int i,a[10];
for(i=10;i>0; i--)
{
    a[i]=i*3*(i+1);
    printf("%d",a[i]);
}
}
