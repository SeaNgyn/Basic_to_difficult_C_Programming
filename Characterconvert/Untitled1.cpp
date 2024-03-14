#include <stdio.h>
#include <stdlib.h>

// viet app nho nho nhap chu cai dau trong ten ban - nhap chua hoa
// sau do in ra chu thuong.
int main(){
	char fL; // cameL case notation
	printf("Input the first letter of your first name for high case: "); scanf("%c", &fL);
	
	fL = fL + 32; // ( fL += 32 )
	
	printf("After converted, the letter changed is: %c\n", fL);
	return 0;
}

