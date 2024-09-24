#include <stdio.h>

void fget()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("Value read : %s",str);
}

void fprint()
{
   FILE *file=fopen("example.txt","r");
    if(fopen==NULL)
    {
        printf("File doesnot exist !");
        return ;
    }

     char value[100];
     fgets(value,31,file);
     printf("%s\n",value);
     char value2[100];
     fgets(value2,40,file);
     printf("%s\n",value2);
     
    fclose(file);

}
int main()
{
   fprint();
    return 0;
}