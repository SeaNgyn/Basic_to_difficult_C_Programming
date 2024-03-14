#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1. 5 > 6 dung ko?
	int result = 5 > 6;
	printf("5 > 6 dung ko? %d\n", result);
	
	//2. 5 < 6 dung ko?
	result = 5 < 6;
	printf("5 < 6 dung ko? %d\n", result);
	
	//3. 6 > 6 dung ko?
	result = 6 > 6;
	printf("6 > 6 dung ko? %d\n", result);	
	
	//4. 100 = 18 dung ko ?
	result = 100 == 18;
	printf("100 = 8 dung ko? %d\n", result);
	
	//5. 100 khac 100 dung ko?
	result = 100 != 100;
	printf("100 khac 100 dung ko? %d\n", result);
	
	// menh de logic &&: cuc ki chat che giua cac menh de
	//               ||: long leo
	
			
	
	
	return 0;
}
