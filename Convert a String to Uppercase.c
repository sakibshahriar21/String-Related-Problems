#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Please Enter Massage: ");
    gets(str);


    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')  ///checking if the alphabet is lowercase or not
        {
            str[i]=str[i]-32;   /// making uppercase alphabet
        }
    }


    printf(" Your Massage is: %s ",str);


    return 0;
}