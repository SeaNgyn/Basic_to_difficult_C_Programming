#include <stdio.h>
#include <stdlib.h>

/* nhap tu ban phim 10 mang so nguyen bat ki
   hoi rang co bao nhieu so chan
   Tinh tong cac so le */

int main(int argc, char *argv[]) {
	int n[10], sumOdd = 0, evenCount = 0;
	printf("Please input 10 numbers to check\n");
	for (int i = 0; i < 10; i++){
		printf("number%d:", i + 1);
		scanf("%d", &n[i]);					
	}			
	for (int i = 0; i < 10; i++){
		if (n[i] % 2 == 0)
			evenCount++;
		else 
			sumOdd += n[i];				
	}
	
	printf("Have %d count(s) and the sum of odd is %d", evenCount, sumOdd);
	
	
	return 0;
}
