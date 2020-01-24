#include<stdio.h>
#include<conio.h>
main()
{
	int row, csp, cnm, nnm=1, nsp,line,val=1;
	printf("enter the number of line");
	scanf("%d",&line);
	nsp=line-1;
	for(row=1;row<=line;row++)
	{
	
		for(csp=1;csp<=nsp;csp++)
			printf("  ");
		for(cnm=1;cnm<=nnm;cnm++)
		{
			printf("%d ",val);
			if(cnm<=nnm/2)
			{	
				val++;
			}
			else
			{
				val--;
			}	
		}
		val=val+2;
		printf("\n");
		nnm=nnm+2;
		nsp--;
		
	}
}
