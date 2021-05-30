#include<stdio.h>

#include<string.h>

char print(char word[])
{

    puts(word);

    printf(" ");

    word[0]='\0';

    return word;
}

int main()
{
    char str[100],word[100];
    int i=0,j=0,start=0;

    printf("Enter A Massage: ");
    gets(str);

    printf("Each Word: ");
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i]<='z') || (str[i] >= 'A' && str[i]<='Z') ) ///if it is a alphabet
        {
            j=0;
            while(str[i] != ' ' && str [i] != '\0') ///create a new string
            {
                word[j]=str[i];
                i++;j++;
            }
            if(str[i] == ' ') ///if it is null the its the end of a word
            {
                word[j]='\0';
                print(word); ///send the string for print
            }
            else if (str[i] == '\0')  ///for the last word
            {
                word[j]='\0';
                print(word); ///send the string for print
                return 0;
            }
        }
        else i++;
    }

    return 0;
}