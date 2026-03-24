#include<stdio.h>
int main(void)
{
	char name[20];
	printf("enter the name :");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name,"/n")]='/0;

	printf("hello ! %s",name);
	return 0;
#end of the program 
}	

