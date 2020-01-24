#include <stdio.h>
#include <conio.h>
main()
{
	int row, column_space, column_star,line;
	printf("Enter the number of line");
	scanf("%d",&line);
	for(row=1; row<=line; row++)
	{
		for (column_space=(2*line)-1; column_space>row; column_space--)
			printf(" ");
		for(column_star=1; column_star<=row; column_star++)
			printf("* ");
		printf("\n");
	}
	
	
	
}
