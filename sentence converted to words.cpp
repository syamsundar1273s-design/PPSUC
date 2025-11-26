#include<stdio.h>
int main()
{
	char a[30];
	int i;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		printf("\n");
		else
		printf("%s",a[i]);
	}
	return 0;
}
