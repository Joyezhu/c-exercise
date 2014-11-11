#include <stdio.h> 

int strlen(char *);

int main()
{
	char *s = "12345678";
	
	printf("len of s is %d\n", strlen(s));

	
	return 0;
}

int strlen(char * str) {

	char * p = str;
	
	while ( *p != '\0') {
		p++;
	} 
	
	return p-str;	
}