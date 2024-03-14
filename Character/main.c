#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char firstchar = 'A'; // cap nhay don luu 1 ky tu
						  // 1 byte trong ram on off thanh ki tu A
						  // dung %c de chi cho cpu biet cach on off
						  // mo vao` chip BIOS/UEFI tren mainboard de tim cach anh xa thanh ky tu tren man hinh
						  // moi ky tu dc anh xa thanh mot con so tu 0->255 ( to hop, so cach ghep cua 2^8 = so cach ghep 0101 cua 8 bit )
	printf("%c\n", firstchar);
	printf("%c is %d\n", firstchar, firstchar);
	
	char secondchar;
	fflush(stdin);
	printf("nhap so de ra ky tu trong bang ASCII: ");
	scanf("%d", &secondchar);	
	printf("So %d trong ASCII la ky tu %c ", secondchar);
	return 0;
}
