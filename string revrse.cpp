#include<stdio.h>
int main ()
{
    char a[501],b[501];
    int i,j,len=0;

    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        len++;
    }

	j= len-1;
    for(i=0; i<len; i++)
    {
        b[j]=a[i];
		j--;
    }

    puts(b);

	getchar();
	getchar();
    return 0;
}