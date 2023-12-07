// write a program to chek a gien number is palindrome number?
// what is palindrome number? A palindrome number is number that remains the same 
// when its diits are reversed
#include<stdio.h>
int main ()
{
    int n,c,s=0,r;
    printf("enter any number:");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(c==5)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}
