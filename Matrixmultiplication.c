#include<stdio.h>
void fun(int a[3][3],int b[3][3]);
int main()
{
	int a[3][3],b[3][3],k,c[3][3],i,j;
	printf("Enter the first matrix\n");	
	/*Input of first matrix*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter the second matrix\n");
		/*Input of second matrix*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	fun(a,b);
}
void fun(int a[3][3],int b[3][3])
{
	/*Code for multiplication of matrices*/
	int c[3][3],i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]=(a[i][1]*b[j][1])+(a[i][2]*b[j][2]);
			}
		}
	}
	/*Printing the product of matrices*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d	",c[i][j]);
			printf("		");
		}
		printf("\n");
	}
}