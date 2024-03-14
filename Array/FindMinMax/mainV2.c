#include <stdio.h>
#include <stdlib.h>

/* 
Tim min max 1 mang nhap tu ban phim
 */

int main(int argc, char *argv[]) {
	int a[10], min, max;
	printf("Input an 10 numbers\n");
	for (int i = 0; i < 10; i++){
		printf("Number#%d:", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("Your number which inputed is:\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
		printf("\n");	
	min = a[0]; // phai cho go xsong moi co a[0] vi luc dau chua biet a[0]	
	min = a[0];
	for (int i = 1; i < 10; i++){

		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];			
	}
	printf("Min is:%d\n", min);
	printf("Max is:%d\n", max);
	
	
	return 0;
}
