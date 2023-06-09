#include<stdio.h>

main()
{
	FILE *p;
	char data[1000] = "Red & White";
	
	p = fopen("clang.txt","w");
	
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
}
