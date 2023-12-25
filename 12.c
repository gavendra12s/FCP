// FOR GIVEN FILE EXIST OR NOT
#include<stdio.h>
#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("test.txt","a");// r mens file searh
    if(fp==NULL)
    printf("file does not exist");
    else
    printf("file exists");
    fprintf(fp,"%s","GAVENDRA SINGH");
    fputs("GAVENDRA",fp);
    fopen("%s","a");
    fopen("%S","a+");
    fopen("%s","W");
    fopen("%s","w+");
    fclose("%s""a");
    fclose("%s""a+");
    fclose("%s""w");
    fclose("%s""w+");
    return 0;
}