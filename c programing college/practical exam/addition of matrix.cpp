//program addition of 2 matrix 
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	printf("enter the value of matrix 1:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the value of matrix 2:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  c[i][j]=a[i][j]+b[i][j];	
		}
	}
	printf("adiition of matrix:\n");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  	printf("%d \t",c[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
