#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
	char data[DATA_SIZE];
	FILE* fptr;
	fptr=fopen("data.txt","w");

	if(fptr==NULL)
	{
		printf("Unbale to create");
		exit(EXIT_FAILURE);
	}
	printf("entre content\n");
	fgets(data,DATA_SIZE,stdin);

	fputs(data,fptr);
	fclose(fptr);

	printf("file created and saved\n");
	
	return 0;
}
