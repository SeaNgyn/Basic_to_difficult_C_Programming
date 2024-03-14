#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[6] = {-5, 10, 100, -50, 1000, 7};

	int t, i;
	for (i = 1; i < 6; i++)	
		if (a[0] > a[i]){
			t = a[0];
			a[0] = a[i];
			a[i] = t;
				
		}
	printf("After swap!!\n");
	for (i = 0; i < 8; i++)
		printf("%d ", a[i]);	
		
		
		
	return 0;
}
