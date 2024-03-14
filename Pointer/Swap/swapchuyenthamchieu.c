#include <stdio.h>
#include <stdlib.h>

// viet ham hoan doi 2 value!!! a= 10 b = 100 thi sau khi hoan doi xong thi a= 100 thi b = 10
void swapV1(int a, int b); // may dua tao 2 con so

void swapV2(int* a, int* b);	// may dua tao dia chi cua 2 bien int nao do
int main() {
	int a = 10, b = 100;
	printf("In main(), before swapping, a=%d; b=%d\n", a, b);
	swapV2(&a, &b);
	printf("In main(), after swapping, a=%d; b=%d\n", a, b);
	return 0;
}

void swapV2(int* a, int* b){
	int t;
	t = *a;
	*a = *b;
	*b =t;
	
}

