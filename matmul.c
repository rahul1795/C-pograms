#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r1,c1,r2,c2,sum=0;
	int a[3][3],b[3][3],c[3][3];
	
	printf("rows 1st matrix : ");
			scanf("%d",&r1);
    printf("col of 1st matrix : ");
			scanf("%d",&c1); 
	
	printf("rows 2nd matrix : ");
			scanf("%d",&r2);
    printf("col of 2nd matrix : ");
			scanf("%d",&c2);
	
	if(c1 != r2)
	{
			printf("multiplication can't be done\n");	
	}
	else
	{
	printf("enter the values of first matrix\n");
	
	//taking values for 1st matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	//taking values for 2nd matrix
		printf("enter the values of second matrix\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
				printf("\n");
	
	// doing multilication
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*a[k][j]);
				
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	
	printf("matrix after multilication is : \n");
				printf("\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
			printf("\n");

	}}
}