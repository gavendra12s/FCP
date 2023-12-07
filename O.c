// Write a c program to check whether a given  year is leap year or not ?
#include<stdio.h>
void main ()
{
    int y;
    printf("enter a year");
    scanf("%d",&y);
    // leap year is perfectly divisible by 400
    if(y%400==0)
    {
        printf("%d is  leap year\n",y);
    }
    // non leap year is divisible by 100
    // but not divisible by 400
    else if(y%100==0)
    {
        printf("%d is not a leap year\n",y);
    }
    // leap year is not divisible by 100 but divisible by 4
    else if(y%4==0)   
    {
        printf("%d is  leap year\n",y);
    }
    else // all other years are not leap year
    {
        printf("%d is not a leap year\n",y);
    }

}