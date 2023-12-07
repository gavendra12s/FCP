// WRITE A PROGRAM TO MAKE SIMPLE CALCULATOR USING (SWITCH-CASE)?
// CALCULATER OF + - * /?
#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,ch;
    printf("1. Addition\n 2.Substraction\n 3.Multiplay\n 4. divide\n ");
    printf("ENTER THE VALUE:");
    scanf("%d",&a);
    printf("ENTER A VALUE :");
    scanf("%d",&b);
     printf("enter a value of choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("ADITION OF %d",a+b);
        break;
        case 2:
        printf("SUBSTRACTIONOF %d", a-b);
        break;
        case 3:
        printf("multiplication of %d",a*b);
        break;
        case 4:
        printf("divide of %d",a/b);
        break;
        default:
        printf("invalid numbers");
        braek:
        getch ();

    }
}

    
 