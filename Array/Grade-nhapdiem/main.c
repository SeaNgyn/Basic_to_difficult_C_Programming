#include <stdio.h>
#include <stdlib.h>

// luu 10 cot diem cua mon C va in ra
//IPO: phai co 10 bien
int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; // khai bao le, rat la tired and not effective
	float c[10]; // y si cai tren nhung rat hieu qua ma thuan tien cho viec khai bao.
				// c[0] c[1] ... c[9]
	c1 = 10.0;  // bien le
	c[0] = 10.0; // bien kieu mang, van la 1 bien va 1 ten goi thoi
	
	printf("bien le: %.2f %.2f %.2f\n", c1, c2, c3);
	
	printf("bien mang: %.2f %.2f %.2f\n", c[0], c[1], c[2]);
	//moi bien trong mang, tinh tu 0, duoc goi la 1 phan tu hay la 1 element
	// muon nhap gia tri cho bien mang thi nhap nhu bien binh thuong
	
	//scanf("%f\n", &c[1]);
	//scanf("%f\n", &c[2]);
	//scanf("%f\n", &c[3]);
	// nhap nhu the thi rat la met nen dung for cho mang la useful
	printf("nhap 10 bien cho moi phan tu mang:\n");
	for (int i = 0; i < 10; i++){
		
		scanf("%f\n", &c[i]);
		
	}
	
	return 0;
}
