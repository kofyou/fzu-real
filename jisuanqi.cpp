#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	int num=0;
	printf("��������ͳ�Ƶ��ļ���:");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("�޷��򿪸��ļ�\n");
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
