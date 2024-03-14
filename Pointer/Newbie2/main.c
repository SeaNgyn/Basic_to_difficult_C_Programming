#include <stdio.h>
#include <stdlib.h>



int main() {
	int a = 5000;
	int b = 7000;
	
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	
	printf("dia chi a: %u\n", &a);  // 80 81 82 83 84
	printf("dia chi b: %u\n", &b);	//76 77 78 79 80 
	
	
	int* c = &a;
	
	printf("value of c: %d\n", *c);
	
	c = &b; //gan gia tri moi cho bieb con tro
	printf("after value of c: %d\n", *c);
	
	
	
	
	
	return 0;
}
