#include <stdio.h>
#include <stdlib.h>

// viet ham hoan doi 2 value!!! a= 10 b = 100 thi sau khi hoan doi xong thi a= 100 thi b = 10
void swapV1(int a, int b);


int main() {
	int a = 10, b = 100;
	printf("In main(), before swapping, a=%d; b=%d\n", a, b);
	swapV1(a, b);
	printf("In main(), after swapping, a=%d; b=%d\n", a, b);
	return 0;
}

void swapV1(int a, int b){
	int t;
	
	printf("Before swaping a=%d, b=%d\n", a, b);
	t = a; // bien trung gian luu lai gia tri truoc khi bien mat
	a = b;
	b = t;
	
	printf("After swaping a=%d, b=%d\n", a, b);
	
}


