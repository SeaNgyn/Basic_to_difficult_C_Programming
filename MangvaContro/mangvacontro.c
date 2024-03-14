#include <stdio.h>
#include <stdlib.h>

// luu va in ra mang 10 con so nguyen bat ky bang con tro
// moi lien he giua mang va con tro
// mang tinh, mang dong, con tro co lien quan
// truyen tham chieu, mang va con tro la dau vao cua ham

int main() {
	int i;
	int a[] = {5, -10, -15, 20, -25};
		// mang la khai bao nhieu bien cung luc, cung kieu, cung ten
		// o sat nhau
		
		for (i = 0; i < 5; i++)
			printf("The address of a[%d]: %u | value %d\n", i, &a[i], a[i]);
		
		// cac nha int cach nhau 4 byte, uoc gi dung con tro de leo qua xem cac value khac
		
		int* hari = &a[0]; // toi tro vao dau day de luu dia chi cua no, roi lay value
		
			printf("Yob a[0] is: %d\n", a[0]);
			printf("Yob a[0] is: %d\n", *hari);
			
			hari++; // nhay 4 byte sang nha ke vi dang la kieu int* chi nhin dc 4 byte
			printf("Yob a[1] is: %d\n", *hari);
			
			// In ca mang cho biu ti fun
			hari = &a[0]; // reset con tro, tro ve dau mang
			printf("The array has values:\n");
			for (i = 0; i < 5; i++)
				printf("%d ", *(hari + i)); // tao la hari dang chot dau mang

			// bien con tro + thi la co dia chi moi 
			// vao dia chi moi *(con tro + )
			// con tro van chot 1 cho ma van di dc mang?
		
	return 0;
}
