#include<stdio.h>
int main()
{
	char a[50];
int i;
	printf("Enter your name:");
	scanf("%s",a);
	printf("You Entered name is %s\n",a);
	for(i=0;a[i];i++)	
	printf("%c\n",a[i]);
}
