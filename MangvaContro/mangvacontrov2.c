#include <stdio.h>
#include <stdlib.h>

// luu va in ra mang 10 con so nguyen bat ky bang con tro
// moi lien he giua mang va con tro
// mang tinh, mang dong, con tro co lien quan
// truyen tham chieu, mang va con tro la dau vao cua ham

int main() {
	int i;
	int a[] = {5, -10, -15, 20, -25};		
		for (i = 0; i < 5; i++)
	// ten mang cung la 1 bien, bien  ma mi, 	luu so nha cua bien dau tien
	// value cua bien ten mang la so nha, dia chi
	// hari luu so nha, toa do vi
	// ten mang luu so nha thang a[0] dau day
	// ten mang la con tro roi vi no co dia chi dm no!
		
		
		
			printf("The address of a[%d]: %u | value %d\n", i, &a[i], a[i]);
	
	
	printf("'A' has value of %u", a); // may la 1 bien, va de tao xem may co cai gi
	//---> ten mang la con tro int* ~ hari
	// deu la int*, la con tro
	
	// in mang
	printf("The array has values: \n");
	
	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]); // in kieu nhu thuong, dung bien a[i] de in
	
	// tao biet a la ten mang va lai la bien con tro dang nam dia chi thang a[0] la thang dau tien
	printf("The array has values(using pointer): \n");	
	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(a + i));
		
	//tuy nhien:
	// int* hari la con tro tuong minh , tuc dc thoai mai tro ++, --
	// a ten mang la con tro ngam/ ko tuong minh/ con tro hang
	//ko dc di lung tung, viec cua no la chot thang dia chi dau mang
	// ko cho ++,--, nhung dc quyen dung no de + va - de tang toa do
			
	// chot don: ten mang dung 1 minh la tuong duong int* hari ( con tro )
	
	// tai sao ten mang, nguoi ta ky hieu luon la con tro.
	
	
	return 0;
}
