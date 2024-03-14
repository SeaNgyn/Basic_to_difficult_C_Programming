#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ta tu viet ham copy 2 chuoi, chinh la ham strcpy()::
// vi ta ko dc gan truc tiep 2 mang cho nhau
// do ten mang la con tro, ko di chuyen dc.


//void strcpyTheanh(char dest[50], char src[50]);  The same but not perfetch.
//void strcpyTheanh(char dest[], char src[]);
// ham nay chinh la truyen tham chieu, vi ham sua ben ham chinh bi doi.

void strcpyTheanh(char* dest, char* src) {
	int i;
	for ( i = 0; i <= strlen(src); i++)
		dest[i] = src[i];
	
	
}




int main() {
	char name[50], n[50] = "nguyen the anh di ngu nhanh 1h roi";
	//strcpy(name, n); // ham nguoi khac tao ra.
	strcpyTheanh(name, n); // ham do minh tao ra.
	
	puts(name);
	
	return 0;
}
