/*
if line=5
output is


     *
   *   *
 *   *   *
   *   *
     *
     
     */
#include<stdio.h>
#include<conio.h>
main()
{
	int row, line, column_space, column_star, nsp,nst=1;
	printf("enter the number of the line");
	scanf("%d",&line);
	nsp=line/2;
	for(row=1;row<=line;row++)
	{
		
		{
			for(column_space=1;column_space<=nsp;column_space++)
				printf(" ");
			for(column_star=1;column_star<=nst;column_star++)
				printf("* ");
			printf("\n");
		}
		if (row <= line / 2)
			{
				nst++;
				nsp--;
			} 
			else
			{
				nst--;
				nsp++;
			}
	
	}
}
