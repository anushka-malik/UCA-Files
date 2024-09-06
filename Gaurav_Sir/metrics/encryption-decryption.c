#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Caesar Cypher encryption-decryption algorithm
void encrypt(char *str)
{
   char ch;
   int k=3;
   for(int i=0;str[i]!='\0';i++)
   {
      ch=str[i];
      if(ch>='a'  && ch<='z')
      {
          ch=ch+k;
          if(ch>'z')
          {
            ch=ch-'z'+'a'-1;
          }
          str[i]=ch;
      }
      else if(ch>='A' && ch<='Z')
      {
          ch=ch+k;
          if(ch>'Z')
          {
            ch=ch-'Z'+'A'-1;
          }
          str[i]=ch;
      }
      else
      {
        ch=ch+3;
        if(ch>'9')
        {
            ch=ch-'9'+'0'-1;
        }
        str[i]=ch;
      }
   }
   printf("Encrypted string is %s\n",str);
}
void decrypt(char *str)
{
   printf(" Value before decryption is %s\n",str);
   char ch;
   int k=3;
   for(int i=0;str[i]!='\0';i++)
   {
    ch=str[i];
    if(ch>='A' && ch<='Z')
    {
       ch=ch-k;
       if(ch<'A')
         ch=ch-'A'+'Z'+1;
        str[i]=ch;
    }
    else if(ch>='a' && ch<='z')
    {
       ch=ch-k;
       if(ch<'a')
        ch=ch-'a'+'z'+1;
       str[i]=ch;
    }
    else if(ch>='0'&& ch<='9' )
    {
      ch=ch-k;
      if(ch<'0')
       ch=ch-'0'+'9'+1;
      str[i]=ch;
    }
   }
   printf("Decrypted string is %s\n",str);
}

int main()
{
    char key[32];
    // char value[256];
    fgets(key,32,stdin);
    // fgets(value,32,stdin);
    encrypt(key);
    // printf("%s\n",key);
    decrypt(key);

    return 0;
}