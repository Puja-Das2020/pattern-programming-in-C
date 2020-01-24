#include<stdio.h>
#include<conio.h>
main()
{
	int row, line,column;
	printf("enter the number of line");
	scanf("%d",&line);
	for(row=1;row<=line;row++)
	{
		for(column=5;column>0;column--)
				printf("%d ",column);
		printf("\n");
	}
}
