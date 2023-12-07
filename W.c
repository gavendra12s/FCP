//write a c program to swap two variable without using a third variable ?
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter value no 1 : ");
    scanf("%d",&x);
    printf("enter value no 2 :");
    scanf("%d",&y);
    fflush(stdin);
    // using + and -
    x=x+y;    // 10,6   16
    y=x-y;    // 10
    x=x-y;     // 6
    printf("\nvalue of x is : %d",x);
    printf("\nvalue of y is :%d ",y); 
    return 0;

}