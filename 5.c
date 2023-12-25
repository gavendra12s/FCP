//Compute nCr using functions: write a function to function to calculate nCr where n and r are given by the user?
// in mathematics nCr has defined as nCr=n!/((n-r)!r!)
#include<stdio.h>
int fact (int);
int main()
{
    int n,r,ncr;
    printf("\n Enter the two number :");
    scanf("%d %d",&n,&r);
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("\n The NCR factor of %d and %d is %d",n,r,ncr);
    return 0;
} 
int fact (int n)
{
    int i=1;
    while (n!=0)
    {
        i=i*n;
        n--;
    }
    return i;
}