#include <stdio.h>
#include <stdlib.h>

/* 
Nhap 1 mang 10 con so. In ra con so nho nhat, lon nhat cua mang
IPO
I: can 10 con so, 

P:vd: -5 10 100 -50 1000
phai quet ca mang/ tuc la nhin tung phan tu thu i
dung bien co de tim

O: min, max -> co 2 bien 
*/

int main(int argc, char *argv[]) {
	int a[10] = {-5, 10, 100, -50, 1000};
	int min, max;
	min = a[0];
	max = a[0];
	for (int i = 1; i < 10; i++){	
		if (a[i] < min)
			min = a[i];			// co chi doi khi min > bien nao do
		if (a[i] > max)
			max = a[i];
	}		
	printf("min is:%d\n", min);
	printf("max is:%d\n", max);
	
	
	
	return 0;
}
