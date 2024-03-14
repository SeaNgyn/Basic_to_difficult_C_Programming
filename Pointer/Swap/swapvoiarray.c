#include <stdio.h>
#include <stdlib.h>
// sap xep mang cac so nguyen, giam dan (decrease)
// ham hoan doi 2 bien

void swap1(int* a, int* b);

// muon dung ham nay phai dua vao 2 toa do, hay 2 dia chi
//trong ham *a *b chinh la x, y o xa xa kia

//ham nay nhan vao 1 mang co kich thuoc size nao do
// sau do no sap xep giam dan decrease, va in ra ket qua
void sortArray(int a[], int size);

int main() {
//	int x = 10; y = 100;
//	printf("Before swapping, x = %d, y = %d", x, y);
//	swap(&x, &y);
//	printf("After swapping, x = %d, y = %d", x, y);
	
	int n[] = {5, -10, -15, 20, -25, -1000};
	sortArray(n, 6);
	
	
	return 0;
}
void swap1(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
	
}
 
 
 //ham can 1 mang va can cai size de for, ham 2 dau vao
void sortArray(int a[], int size){
	// in mang truoc khi sort
	int i, j, t;
	printf("The array before sorting\n");
	for (i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	for (i = 0; i < size - 1; i++)
		for ( j = i + 1; j < size; j++)
			if (a[i] < a[j])
				swap1(&a[i], &a[j]);
				
	printf("\nThe array after sorting\n");
	for (i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
}


/*
void sortArray(int a[], int size){
	// in mang truoc khi sort
	int i, j, t;
	printf("The array before sorting\n");
	for (i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	for (i = 0; i < size - 1; i++)
		for ( j = i + 1; j < size; j++)
			if (a[i] < a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}	
	printf("\nThe array after sorting\n");
	for (i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
}*/





