// compare of two string ? WITH USING OF STRING LIBRARY
#include<stdio.h>
#include<conio.h>
void main()
{
    char na[50], ch[50];
    int i , f=0;
    printf("Enter first string");
    gets (na);
    printf("Enter a second string");
    gets (ch);
    for (i=0; na[i]!=NULL; i++)
    {
        if (na[i]!=ch[i])
        {
            f=1;
            break;
        }
    }
    if (f==1)
    printf("string are not same");
    else
    printf("string are not same");
}
