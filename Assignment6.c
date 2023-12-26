//File Write operation:write a C  proogram to write a data into a file.
#include<stdio.h>
void main()
{
    FILE *fptr;
    char name [20];
    int age;
    int salary;
    fptr=fopen("C:\\emp.rec","w");
    if (fptr == NULL)

    {
        printf("File does not exist\n");
        return;
}
printf("Enter the name\n");
gets (name);
fprintf(fptr, "name=%s\n", name);
printf("Enter the age\n");
scanf("%d",&age);
fprintf(fptr,"Age =%d\n",age);
printf("Enter the salary\n");
scanf("%d",&salary);
fprintf (fptr,"salary =%d\n",salary);
fclose (fptr);
}