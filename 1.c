#include<string.h>
void main ()
{
    char s[]= "programing is fun";
    int i;
    for (i = 0; s[i] !='\0'; ++i);


    printf("length of string: %d",i);
    return 0;
    
}