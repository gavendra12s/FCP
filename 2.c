// compare of two string ?
#include<stdio.h>
int compare(char[],char[]);
int main ()
{
    char str1[20]; //declaration of char array
    char str2[25];// declaration of char array 
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string");
    scanf("%s",str2);
    int c=compare(str1,str2);//calling compare() function
    if (c==0)
    printf("string are same ");
    else
    printf("string are not same");
    return 0;
}