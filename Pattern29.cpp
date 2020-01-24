#include<stdio.h>
#include<conio.h>
main()
{	int row,line, csp, cnm, nnm=1,nsp, val=1;
	printf("enter the number of line");
	scanf("%d",&line);
	nsp=line-1;
	for(row=1;row<=line;row++)
	{
		for(csp=1;csp<=nsp;csp++)
			printf("  ");
		for(cnm=1;cnm<=nnm;cnm++)
		{
			if(cnm==1 || cnm==nnm) 
			{
				printf("%d ",row);
			}
			else
				{
					printf("%d ",0);
				}
		}
		printf("\n");
		nsp--;
		nnm=nnm+2;
			
	}
	
	
}
