int main()
{
    char str[100];
    int i=0;

    printf("Please Enter a Massage: ");
    gets(str); ///scan string

    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u') ///checking the vowels
        {
            str[i]='#'; ///replace the vowels with "#";
            i++;
        }
        else i++;

    }


    printf("Your new massage: ");
    puts(str);///printing

    return 0;
}