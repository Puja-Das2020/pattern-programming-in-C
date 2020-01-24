#include<stdio.h>
#include<conio.h>
main()
{
	int row, column_space, column_for_number=1, number_space, number_digit=1, line, val;
	printf("enter the number of line");
	scanf("%d",&line);
	number_space=line-1;
	for(row=1;row<=line;row++)
	{
		val=1;
		for(column_space=1;column_space<=number_space;column_space++)
			printf("  ");
		for(column_for_number=1;column_for_number<=number_digit;column_for_number++)
			{
				printf("%d ",val);
				if(column_for_number<=number_digit/2)
					{
						val++;
					
					}
				else
					{
						val--;
						
					}
				
			}
		printf("\n");
		number_space--;
		number_digit=number_digit+2;
	
			
		
	}
	
}
