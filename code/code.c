<<<<<<< HEAD
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
||||||| merged common ancestors
=======
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//to check rebass comment
>>>>>>> master
