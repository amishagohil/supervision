#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	
	p= fopen("clang.txt","r");
	
	if(p == NULL)
	{
		printf("file couldnot open.");
	}
	else
	{
		while(fgets(data,25,p) != NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
