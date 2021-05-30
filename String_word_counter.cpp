#include<stdio.h>
#define size 100
int main (){
	char a[size];
	char prev_char;
	int i,word;

	printf("Enter any string\n");
	gets(a);

	i = 0;
	word = 0;
	prev_char = '\0';

	while(1){
		if(a[i]==' ' || a[i]=='\n' || a[i]=='\t' || a[i]=='\0'){
			if(prev_char!=' ' && prev_char!='\n' && prev_char!='\t' && prev_char!='\0'){
				word++;
			}
		}
		prev_char = a[i];

		if(a[i] =='\0')
			break;
		else 
			i++;
	}
	printf("Total number of words in the string is: %d",word);
	getchar ();
	getchar ();
	return 0;
}
