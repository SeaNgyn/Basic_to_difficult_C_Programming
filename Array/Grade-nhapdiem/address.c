#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c[10];
	for (int i = 0; i < 10; i++)
	printf("The address of c[%d]: %u\n", i, &c[i]);
	
	printf("the value of name's variable: %d\n", c);
	
	// ky thuat khai bao mang va gan luon
	float d[10] = {1, 2, 3, 4, 5, 6, 7, 8}; // cac bien con lai ko dc khai bao luon bang 0 chu ko phai la bien rac
											// kiem soat dc cac bien ko dc gan gia tri
	for (int i = 0; i < 10; i++)
		printf("[%d]: %.2f\n", i, d[i]);
	
	float col[] = {1, 2, 3, 4, 4, 5};
	// cau nay ko noi ro co bao nhieu bien duoc cap
	// luc nay mang se tu dong dc cap 5 bien tuuy theo so luong va luu dc gan la 7	
	
	
	
	return 0;
}
//%u: unsigned so nguyen ko dau chi la +, giao dong 4ty
//%d: so nguyen co dau, + hoac -, giao dong -2ty1 den 2ty1
// ten mang la mot bien rat dac biet vi no luu dia chi cua element/ bien trong mang dau tien/ dau day
