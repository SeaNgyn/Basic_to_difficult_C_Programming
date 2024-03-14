#include <stdio.h>
#include <stdlib.h>

// Truyen tham chuieu
// cho tao dia chi, tao se don nha may luon hehehe

//int f(int x);  cai nay truyen tham tri, cho tao bien binh thuong di, deo noi chuyen voi may`

//void f(int* x);  // moi lan dung ham nay, dung dua value cho bo may 
				// vi bo may can value dac biet, do la value dia chi cua bien nao do
				// tao chinh la truyen tham chieu ok? pro hon
void f(int* x);				
int main() {
		
		int x, r;
		printf("In main, before calling f() x is: %d\n", x); 
		r = f(&x); 
		printf("In main, after calling f() x final is: %d\n", r); 
	
	return 0;
}

//void f(int* x){ // x- nay la x con tro, la bo may can dia chi
//				// chu khong can bien binh thuong, gia tri binh thuong, hieu ko?
//	
//	*x = *x * *x; // *x: bien o xa, cai bien ma con tro, tro den dia chi cua bien day de lay value
//				// luc nay ham trong main() bi thay doi bang ham trong f()
//				// bo may se dden don nha` may haha
//				// hay con la x-main * x-main
//}


void f(int* x){ // x- nay la x con tro, la bo may can dia chi
				// chu khong can bien binh thuong, gia tri binh thuong, hieu ko?
				
				
	*x = *x * *x; // *x: bien o xa, cai bien ma con tro, tro den dia chi cua bien day de lay value
				// luc nay ham trong main() bi thay doi bang ham trong f()
				// bo may se dden don nha` may haha
				// hay con la x-main * x-main

	
}





