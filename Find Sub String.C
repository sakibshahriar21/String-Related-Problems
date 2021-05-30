#include<stdio.h>

int main()
{
    char str[30], sea[30];
    int c1 = 0, c2 = 0, i, j, f;

    printf("a Please Enter a string:");
    gets(str);
    printf(" Please Enter search word:");
    gets(sea);

    while (str[c1] != '\0') ///counting the length
        c1++;
    while (sea[c2] != '\0')  ///counting the length
        c2++;
     
    ///Checking for sub string  
    for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            f = 1;
            if (str[j] != sea[j - i])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            break;
    }
   
   
    if (f == 1)
        printf("a Yes ");
    else
        printf("a No ");


    return 0;
}