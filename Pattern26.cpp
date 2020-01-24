#include<stdio.h>
#include<conio.h>
main()
{
	int row, column_space, column_for_number, line,nsp,nnm=1;
	printf("Enter the number of line");
	scanf("%d",&line);
	nsp=line-1;
	for(row=1;row<=line;row++)
	{
		for(column_space=1;column_space<=nsp;column_space++)
			printf("  ");
		for(column_for_number=1;column_for_number<=nnm;column_for_number++)
			{
				printf("%d ",column_for_number);
				
			
			}
		nnm+=2;
		nsp--;
		printf("\n");
				
	}
	
	
}
