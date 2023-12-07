// CHECK WHETHER GIVEN NUMBER IS PRIME OR NOT?
#include<stdio.h>
int main ()
{
    int a,i,f=0;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&a);
     for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            f++;

    }
    
}
if(f==0)
printf("prime number");
else
printf("not prime number");
return 0;
}


