#include<stdio.h>

main()
{
	int i,j,a=4,b=4;
	
	for(i=1; i<=4; i++)//2
	{
		for(j=1; j<=7; j++)
		{
			if(j==a || j==b)//5==5 || 5==3
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		a++;//6
		b--;//2
		printf("\n");
	}
	
}