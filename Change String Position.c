#include<stdio.h>

int main()
{

    char str[100],new_str[100];
    int i,n,j=0,c=0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a position: ");
    scanf("%d",&n);


    for(i=n,j=0;str[i]!='\0';i++,j++)
    {
        new_str[j]=str[i];  ///saving the string in a new string until NUll
    }

    for(i=0;i<n;i++,j++)
    {
        new_str[j]=str[i]; ///saving the string until n.
    }

    new_str[j]='\0';  ///assign the last value as NULL.


    printf(" Your New String: %s ",new_str);


    return 0;
}