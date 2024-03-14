#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
//	int a[10] = {-5, 10, 100, -50, 1000, 500, 70, 40, 30, 20};
//	
//	int t, i, j;
//	for (i = 0; i < 10 - 1; i++)			// ta lay a[0] quet tu a[1] ... ta lay a[9] quet den a[10] la xong
//		for (j = i + 1; j < 10; j++)		// quet tu a[1] den het mang xem co ai lon hon ko
//			if (a[i] > a[j]){
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//				
//			
//			
//			
//
//				
//		
//	printf("After swap!!\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);	
	


int i, j, t, n;
	int a[4];	//a[0] a[1] a[2] a[3]
	for (i = 0; i < 4; i++)
		scanf("%d", &a[i]);
		

	
	for (i = 0; i < 3; i++)

		for (j = i + 1; j < 4; j++)
		
			if (a[i] > a[j]){  //tang dan      ,        < giam dan
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
			}	
			
		for (i = 0; i < 4; i++)
		printf("%d ", a[i]);
  















	
	return 0;
}
