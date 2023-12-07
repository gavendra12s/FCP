// calculate the length of the string
#include<string.h>
void main()
{
    char s[20];
    int l;
    printf("Enter the string:");
    gets (s);
    l=strlen(s);
    printf("the length of the string of %d",l);
}