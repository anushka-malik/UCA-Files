#include <stdio.h>
#include <stdlib.h>
void bin()
{
  FILE* file=fopen("binops.bin","wb+");
  if(file==NULL)
  {
    printf("File cannot be opened");
    exit(1);
  }
  char str[20];
  fgets(str,sizeof(str),stdin);
  
  fwrite(&str,sizeof(str),1,file);
  rewind(file);
  char str2[20];
    fread(&str2,sizeof(str2),1,file);
 
    printf("read string:%s",str2);
 
    fclose(file);

}

int main()
{
    bin();
    return 0;
}