#include<stdio.h>
#include<conio.h>
main()
{
	int line, row, column_space, column_star;
	printf("Enter the number of line");
	scanf("%d",&line);
	for(row=1;row<=line;row++)
	{
		for(column_space=1;column_space<=row;column_space++)
			printf(" ");
		for(column_star=line;column_star>=row;column_star--)
			printf("* ");
		printf("\n");
	}
}
