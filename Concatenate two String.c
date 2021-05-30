#include <stdio.h>


int main()
{
    char array1[100];
    char array2[100];

    int i,j,count=0;

    printf("Please Enter The 1st massage:");
    gets(array1);

    printf("Please enter the 2nd massage:");
    gets(array2);


    for(i=0;array1[i]!='\0';i++)  /// counting the array1 length
    {
        count++;
    }

    for(i=count,j=0;array2[j]!='\0';j++,i++)
    {
        array1[i]=array2[j];        ///saving the array2 in array1 after max length of array1
    }
    array1[i]='\0';  ///last character assign as NULL

    printf("a Massage: %s",array1);
   
   
    return 0;
}