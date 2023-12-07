// write a c program to convert a given integer (in second)to hours,minutes,and seonds.
#include<stdio.h>
void main ()
{
    int seconds, minutes, hours;
    printf("enter seconds :");
    scanf("%d",& seconds);

    hours = seconds/3600;
    seconds = seconds%3600;
    minutes = seconds/60;
    seconds = seconds%60;

    printf("hours=%d, minutes=%d,seconds=%d, hours, minutes, seconds");

}