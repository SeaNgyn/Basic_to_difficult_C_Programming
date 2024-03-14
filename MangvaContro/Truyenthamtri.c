#include <stdio.h>
#include <stdlib.h>

// viet ham y = f(x) = x^2
// ham lam nhiem vu binh phuong dau vao
// truyen tham tri, truyen gia tri vao.

void f(int x); // x la dau vao

int main() {
	
	int x = 10;
	printf("In main(), x before calling f() x is: %d\n", x); // sure la 10
	
	f(x);  // goi ham la call/calling/invoke
	
	printf("In main(), x after calling f() x final is: %d\n", x); // van la x trong main van la 10
																	// nhung bay gio tao muon ham f() tac dong lam thay doi x = 10 cua ham main 
																	// thanh 100 co


	return 0;													
}

// truyen tham tri : la moi mot ham ko the thay doi gia tri bien cua ham kia
// vd ham main x = 10 va ham f() bien cung bang 10 , 2 bien cua 2 ham ko tac dong dc voi nhau
// bien cua ham f() thay doi thi bien cua ham main() ko bi tac dong/ hay khong bi thay doi
void f(int x){   // luc nay x = 100, x cua ham
	printf("In f(); x before ^2: %d\n", x);
	
	x *= x; // gan tu than, tu tao tang len
	
	printf("In f(); x after ^2: %d\n", x);
	// sure x da bi doi trong ham!!!
	
}


