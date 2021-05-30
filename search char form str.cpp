#include<stdio.h>
int main ()
{
	char a[501],x,y;

	scanf("%s",a);
	scanf("%c%c",&y,&x);

	for(int i=0; a[i]!=0; i++)
	{
		if(a[i]==x)
		{
			printf("Found at index: %d\n",i);
		}
	}
	getchar();
	getchar();
	return 0;
}