#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// dung trong noi bo, chua truyen tham so voi.
void removeChar() {
	char n[50] = "Nguyen7Theanh"; // dung 13, nhung lay 14 bien vi bien cuoi chua null.
	// xoa so 7
	// giu nguyen n[0], 
	n[6] = n[7]; // day len de thay thang so 7
	n[7] = n[8];
	n[8] = n[9];
	n[9] = n[10];
	n[10] = n[11];
	n[11] = n[12];
	n[12] = n[13];
	n[13] = n[14];
	printf("After remove: ");
	puts(n);
	
	
	
	
}


void removeCharV2() {
	char n[50] = "Nguyen73Theanh";
	int i;
	
	for (i = 6; i < strlen(n); i++){

		n[i] = n [i + 1];
		
	}	
	printf("After removeV2: ");
	puts(n);
	
	
}
// ab123kh hay xoa tat ca cac so co trong chuoi.

void removeCharV3() {
	char n[50] = "ab123kh";
	// ta pai hoi tung ky tu xem co la so' hay ko;
	int i, j;
	for (i = 0; i < strlen(n); i++) // di het mang hoi tung ky tu co la so ko
		if (n[i] >= '0' && n[i] <= '9'){ 
			for (j = i; j < strlen(n); j++)
				n[j] = n[j + 1];
				i--;
			
			
		}
	puts(n);	
	
	
	
}


int main() {
	removeCharV2();
	return 0;
}
