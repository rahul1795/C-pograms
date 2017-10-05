#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3][3],b[3][3],c[3][3];
	
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

	//makin addition between both and rint to 3rd matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
     c[i][j]=a[i][j]+b[i][j];
		}
	}
	
		printf("1st matrix is : \n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
			printf("\n");

	}
					printf("2nd matrix is : \n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
			printf("\n");

	}
					printf("matrix after addition is : \n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
			printf("\n");

	}
	return 0;
}