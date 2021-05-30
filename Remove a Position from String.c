#include<stdio.h>


int main()
{
    char str[100], strn[100];
    int i,n;
   
    printf("Enter a string: ");
    gets(str);
    printf("Enter a position: ");
    scanf("%d",&n);


    i=0;
    while(i!=n)
    {
        i++; /// counting the i value until n
    }

    while(str[i]!='\0')
    {
        str[i]=str[i+1]; /// saving all character after n as +1
        i++;
    }

    printf(" Your New String: %s",str);


    return 0;
}