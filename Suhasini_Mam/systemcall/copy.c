#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *fptr,*fptr2;
	char filename1[100];
	char filename2[100];
	int c;
	printf("enter name of file to copy from\n");
         scanf("%s",filename1);
	 fptr=fopen(filename1,"r");
	 if(fptr==NULL)
	 {
		 printf("cannot open %s\n",filename1);
		 exit(EXIT_FAILURE);
	 }
	 printf("enter file to copy into\n");
	 scanf("%s",filename2);

	 fptr2=fopen(filename2,"w");
	 if(fptr2==NULL)
	 {
		 printf("cannot open file %s\n",filename2);
		 exit(EXIT_FAILURE);
	 }

	 while((c=fgetc(fptr))!=EOF)
	{
		fputc(c,fptr2);
	}

	printf("Contents copied to %s\n ",filename2);

	fclose(fptr);
	fclose(fptr2);

	return 0;
}
