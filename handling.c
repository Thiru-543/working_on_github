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
	rewind(ptr);
	fseek(ptr,15,SEEK_SET);
	fprintf(ptr,"%s %s %s ",'23/4/2026',"hello","selvan");

	printf(" name :%s  variable :%c  integer :%d\n",name,a,var);
	fclose(ptr);
	return 0;
}

