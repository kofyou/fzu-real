#include<stdio.h>
int main() 
{
	char a[1000],b[1000];
	int i=0;
	scanf("%s",a);
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	printf("%s",b);
	return 0;
}
