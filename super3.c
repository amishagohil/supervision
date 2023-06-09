#include<stdio.h>

main()
{
	FILE *p;
	char data[1000] = "Red & White";
	
	p = fopen("clang.txt","a");
	
	if(p == NULL)
	{
		printf("file couldnot open");
	}
	else
	{
		printf("enter data =");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfully....");
	}
	fclose(p);
	
	printf("\n=========================\n");
	
	p = fopen("clang.txt","r");
	if(p == NULL)
	{
		printf("file couldnot open");
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
