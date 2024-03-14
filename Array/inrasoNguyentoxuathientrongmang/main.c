#include <stdio.h>
#include <stdlib.h>

// cho 1 mang cac so tu nhien
// in ra nhung so nto xuat hien trong mang

//vd: 5, 10, 15, 23, 7, 9, 11, 13

int isPrime(int n); // may dua n tao tra ve 1 con int 
					// con int tao quy uoc 0: eo la so nto
					//					   1: la so nto
void printPrimeList(int a[], int size);
// ham nhan vao 1 mang so duong, va kich co
//ham in ra so nguyen to trong mang					
int main() {
	int a[] = {5, 10, 15, 23, 7, 9, 11, 13};
	printPrimeList(a, 8);
	
	return 0;
}
// n la so nto neu: no chi co 2 uoc 

int isPrime(int n){
	int divisorCount = 0; // so uoc so ban dau
	int i;
	for (i = 1; i <= n; i++)
		if(n % i == 0) 
			divisorCount++;
			
	if (divisorCount == 2)
		return 1; // dung la nguyen to vi chi co 2 uoc so
	
	return 0;
	
	
}


void printPrimeList(int a[], int size){
	int i;
	printf("The arrays has values of\n");
	for( i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	printf("\nThe list of prime numbers in this array\n");	
	for ( i = 0; i < size; i++)
		if (isPrime(a[i]) == 1)
			printf("%d ", a[i]);
	
}











