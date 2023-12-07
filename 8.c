#include<stdio.h>
void main ()
{
    char*p="hello";
    char a[10]="hello";
    printf("%s\n",p);
    printf("%s\n",a);
    a[0]='f';
    printf("%s\n",a);
    p[0]='f';
    printf("%s\n",p);
}