// Write a c proram tocalculate simple interest?
#include<stdio.h>
#include<conio.h>
void main ()
{
    float p,r,t,si;
    printf("enter the principal amount= ");
    scanf("%f",&p);
    printf("enter the rate of interest= ");
    scanf("%f",&r);
    printf("enter the time duration= ");
    scanf("%f",&t);

    si=(p*r*t)/100;
    printf("The simple interest is %f",si);
    getch ();

}