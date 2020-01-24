#include<stdio.h>
#include<conio.h>
main()
{
	int row, csp, cnm, nsp,nnm=1, line;
	printf("enter the number of line");
	scanf("%d",&line);
	nsp=line-1;
	for(row=1;row<=line;row++)
	{
		for(csp=1;csp<=nsp;csp++)
			printf("  ");
		for(cnm=1;cnm<=nnm;cnm++)
			printf("%d ", 1);
		printf("\n");
		nsp--;
		nnm+=2;
	}
	
}
