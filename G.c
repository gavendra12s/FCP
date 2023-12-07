// WRITE A PROGRAM GIVEN NUMBER IS EVEN OR ODD?
#include<stdio.h>
int main ()
{
    int n;
    printf(" ENTER A NUMBER to check :");
    scanf("%d",&n);
    if(n%2==0)
        {
        printf("%d is even number",n);
        }
    else
        {
        printf("%d is odd",n);
        }
    return 0;


}