#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Please Enter a massage: ");
    gets(str);

    int i=0,vowel=0,consonant=0;
   
    while(str[i]!='\0')
    {

        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            vowel++;
            i++;

        }
        else  if  (str[i]==' ')
        {
            i++;
        }
        else
        {
            consonant++;
            i++;
        }
    }

    printf(" Vowels: %d",vowel);
    printf(" Consonants: %d ",consonant);
   
    return 0;
}