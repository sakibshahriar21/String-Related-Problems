#include <stdio.h>

int main()
{
    char str[30];
    int x, len;
    int fre[26];


    printf("a Please Enter any string: ");
    gets(str);


   for(len=0;str[len]!='\0';len++) ///counting the string length

    for(x=0; x<26; x++)
     {
        fre[x] = 0; ///saving a array for 26 alphabet and assign them as 0;
     }

    /// checking for all
    for(x=0; x<len; x++)
     {
         if(str[x]>='A' && str[x]<='Z') /// for uppercase
           {
           fre[str[x] - 65]++; /// saving them in a array
           }
        else if(str[x]>='a' && str[x]<='z')/// for lowercase
           {
            fre[str[x] - 97]++;  /// saving them in a array
           }
     }


    printf("a Frequency of all characters in the given string: ");
    for(x=0; x<26; x++)
     {
        if(fre[x] != 0) /// don't print those alphabet which don't have in the string
            {
            printf("'%c' = %d ", (x + 97), fre[x]);
            }
     }

    return 0;
}