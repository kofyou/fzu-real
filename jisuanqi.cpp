#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	int num=0;
	printf("请输入需统计的文件名:");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("无法打开该文件\n");
		exit(0); 
	} 
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ch=='\n')
			num++;
	}
	fclose(fp);
	printf("%d\n",num);
	return 0;
} 
