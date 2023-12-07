// write a c program to swap two variables  using third variable ?
#include <stdio.h>
int main ()
{
    int x,y,temp;
    printf("Enter value no 1 : ");
    scanf("%d",&x);
    fflush(stdin);
    printf("Enter value no 2 :");
    scanf("%d",&y);
    fflush(stdin);
    
    temp=x;
    x=y;
    y=temp;
    printf("\nvalue of x is : %d", x);
    printf("\nvalue of y is : %d", x);
    return 0;
}
 