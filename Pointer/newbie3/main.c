#include <stdio.h>
#include <stdlib.h>



int main() {
	int a = 5000;
	int b = 7000;
	int* c;
	printf("a0: %d\n", a);
	printf("b0: %d\n", b);
	
	printf("dia chi a: %u\n", &a);  // 80 81 82 83 84
	printf("dia chi b: %u\n", &b);	//76 77 78 79 80 

	c = &b; // bien c dang tro vao bien b;
	printf("b1: %d\n", b);
	printf("b1: %d\n", *c);
	
	c++; // dang la dia chi neu ++ la di sang dia chi ke tiep
	    	// luc nay no tang len 4byte vi la 1 bien int chua 4 byte
	    	// vi dang tro dia chi 76 neu ++ len la nhay len 4byte 
	    	// la nhay len dia chi 80 do chinh la dia chi cua bien a
	    	// luu y: la phai biet chac no o gan nhau moi nhay dc
	printf("a1: %d\n", *c);
	(*c)++;
	++(*c);
	printf("a1: %d\n", *c);
	
	printf("a1: %u\n", c);
	c--;
	printf("b2: %u\n", c);
	printf("b2: %d\n", *c);
	
	return 0;
}
