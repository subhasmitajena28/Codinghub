#include<stdio.h>
#include<stdlib.h>

void stringLength(char *str);

int main()
{
	char *str=(char*)malloc(10*sizeof(char));
	str="sophie";
	stringLength(str);
	return 0;
}
void stringLength(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	printf("Length of string is :%d",count);
}

