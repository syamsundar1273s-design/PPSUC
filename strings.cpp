#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="sec",b[10]="syam";
	printf("a string length is:%d\n",strlen(a));
	printf("a string reverse is:%s\n",strrev(a));
	printf("a string in uppercase is:%s\n",strupr(a));
	printf("a string in lowercase is:%s\n",strlwr(b));
	printf("a string copy is:%s\n",strcpy(a,b));
	printf("a string concat is:%s\n",strcat(a,b));
	printf("a string compare is:%s\n",strcmp(a,b));
return 0;

}
