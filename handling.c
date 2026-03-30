#include<stdio.h>

int main(void)

{
	FILE *ptr;
	int var;
	char a;
	char name[10];
	ptr=fopen("thiru.txt","w+");
	fprintf(ptr,"%d %c %s ",45,'f',"thiru");
	rewind(ptr);
	fseek(ptr,0,SEEK_SET);
	fscanf(ptr,"%d %c %s ",&var,&a,name);
	printf(" name :%s  variable :%c  integer :%d\n",name,a,var);
	fclose(ptr);
	return 0;
}

