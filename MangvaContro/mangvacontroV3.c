#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	int a[] = {5, -10, -15, 20, -25};		
	
	for (i = 0; i < 5; i++)
		printf("a[%d] = %3d; address: %u\n", i, a[i], &a[i]);
	
	// ten mang la bien con tro, no chot so nha hay dia chi
	// thang dau mang
	printf("'A' stores/holds the value: %u\n", a);
	
	// khi biet ten mang la con tro, tro thang dau day
	// thi co the vao nha thang dau day 
	
	printf("a[0] = %3d\n", *a);
	
	printf("a[1] = %3d\n", *(a + 1));
	
	// so duoc thi sua dc
	
	*(a + 1) = 69;
	
	printf("\nArray after\n");	
	for (i = 0; i < 5; i++)
		printf("a[%d] = %3d; address: %u\n", i, a[i], &a[i]);		
	
	
	// vi sao a++ trong nay` ko dung dc, vi luc nay a = &a[0] , luon luon phai luu dia chi thang a[0] nay, cam ++ de len a[1] vi deo cho phep di choi, di lung tung
	// chi luon dc tro thang dau tien, ko dc tro di dau khac ngoai no
	//choi thu voi hari
	
	int* hari;
	//hari = &a[0]; okie
	hari = a; // vi ten mang chinh la dia chi cua a[0], okie hon
	
	printf("\nThe array has value\n");
	for (i = 0; i < 5; i++)
		//printf("%d\t", a[i]);  con nit cung lam` dc
		//printf("%d\t", *(a + i));  vua hoc hom qua, da rat pro 
		//printf("%d\t", *(hari + i)); hari van chot dau day nhung + them de di sang nha kia thoi
		printf("%d\t\n", *(hari++)); // hari nhay luon deo chot o dau nua nhung van tuong tu
	printf("Belive or not!!! -> %u\n", --hari);
	printf("Belive or not!!! -> %d\n", *hari);
	return 0;
}
