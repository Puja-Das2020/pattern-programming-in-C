/*
if line=5
output is

          1
       2  1  2 
    3  2  1  2  3
  4 3  2  1  2  3 4
5 4 3  2  1  2  3 4 5


*/
#include<stdio.h>
#include<conio.h>
main()
{
	int row,line, csp, cnm, nnm=1,nsp, val=1;
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
				val--;
			}
			else
				{
					val++;
				}
		}
		val=row+1;
		printf("\n");
		nsp--;
		nnm=nnm+2;
			
	}
	
	
}
