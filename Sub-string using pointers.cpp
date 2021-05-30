#include<stdio.h>
int main () {
	char a[101],b[101];
	int i,flag=0,len1=0,len2=0;
	char *p1,*p2;
	
	printf("Enter tow strings: ");
	gets(a);
	gets(b);

	p1= a;
	p2= b;
	i=0;
	while(*(p1+i) != '\0'){
        len1++;
        i++;
    }
	while(*(p2+i) != '\0'){
        len2++;
        i++;
    }

	
	
	for(i=0; i<len1; i++){
		int j=0,k=i;
		while(*(p1+k) == *(p2+j) && *(p1+k)!='\0' && *(p2+k)!='\0'){
			k++;
			j++;
		}
		if(j==len2){
			flag++;
			break;
		}
	}
	
	if(flag!=0){
		printf("%s is found starting at index %d\n",*p2,i);
	}
	else {
		printf("%s is not found in %s\n",*p2,*p1);
	}

	getchar ();
	getchar ();
	return 0;
}