#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],x[10][10],r,c,i,j;
	printf("enter row and column values");
	scanf("%d%d",&r,&c);
	printf("enter a matrix value");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)	
	{
		scanf("%d",&a[i][j]);
	}
}
    printf("enter b matrix value");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    	scanf("%d",&b[i][j]);	
        }
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
	x[i][j]=a[i][j];
}
	}
	printf("addition matrix:/n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
    	{
		printf("%d\t",x[i][j]);
	    }
    	printf("/n");
    }
	return 0;
    }
