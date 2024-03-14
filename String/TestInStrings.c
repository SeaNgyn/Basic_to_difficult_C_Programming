#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char s[50] = "2theanh7";
	int i, j;	
	for (i = 0; i < strlen(s); i++)
		if (s[i] >= '0' && s[i] <= '9'){
	
			for (j = i; j < strlen(s); j++)
				s[j] = s[j + 1];
			i--;
		}	
	printf("%s", s);
	
return 0;

}




