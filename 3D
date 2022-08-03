#include<stdio.h>
int a,b,c; //vars for "nested for loops"
int main()
{
	int d[2][3][3]; //array declare
	printf("Enter the values in the array [upto 18 values] \n");
	for(a=1;a<=2;a++) //block
	{
		for(b=1;b<=3;b++) //rows
		{
			for(c=1;c<=3;c++) //columns
			{
				printf("The value at array (Position[%d][%d][%d]): ",a,b,c);
				scanf("%d",&d[a][b][c]);
			}
		}
	}
	printf("\n [+] Enter the values in the array [+]\n\n");
	printf("Printing the values in the array [3D Array] \n\n\n\n");
	for(a=1;a<=2;a++)
	{
		for(b=1;b<=3;b++)
		{
			printf("\t");
			for(c=1;c<=3;c++)
			{
				printf("|_%d_|",d[a][b][c]);
				if(c==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
