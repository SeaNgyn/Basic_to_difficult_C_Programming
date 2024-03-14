#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Tinh tuoi cua ban khi co trong tay nam sinh
/* câú tao cua ram gom rat nhieu transitor xep lien ke nhau va xep thanh tung cum 8 transitor 
1 cum 8 transitor duoc goi la 1 byte- moi byte se danh dau/ xac dinh/ toa do cua mot bien trong ram */
int main(int argc, char *argv[]) {
	
	int yob = 2003;  // 2003 duoc dat(goi) la nam sinh 
	                 // yob la 1 bien
	                 // may tinh luu ho 2003 qua ten goi yob 
	                 //cat trong ram duoi dang ON/OFF nhi phan 010101 
	printf("your year of birth is: %d\n", yob);
	
	int grade = 10;
	scanf("")
	printf("your grade is: %d\n", grade);
	
	int age = 2022 - yob;
	
	printf("my age is: %d years old\n", age);
	// hoi xem 2 con so nay nam o doan nao trong ram hay con` goi la dia chi cua bien'
	
	printf(" Toa do cua yob la: %u\n", &yob); // Bien' yob bat dau tu byte thu may ( int la 4 byte )
	printf(" The address of grade is: %u\n", &grade); // Bien' grade bat dau nam tu byte thu may ( int luon la 4 byte nhung chi can biet toa do byte dau la ok )
	printf("the location of age is: %u\n", &age); // Bien' age bat dau nam tu byte thu?
	/* kieu giu lieu int la 4 byte
	&grade tim dia chi bat dau cua byte */
	// tinh tuoi: nam hien hanh - nam sinh
	// 2022 - yob
	// => hard-code
	
	return 0;
}
