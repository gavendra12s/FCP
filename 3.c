//CONCATENATE OF TWO STRING(OR ADD OF TWO WORDS)WITH USING OF STRING LIBRARY
#include<stdio.h>
#include<string.h>
void main()
{
  char S1[30], S2[30];
  printf("Enter first name:");
  gets (S1);
  printf("Enter last name:");
  gets (S2);
  strcat (S1,S2);
  printf("concatenate string is : %s",S1);
  

}

