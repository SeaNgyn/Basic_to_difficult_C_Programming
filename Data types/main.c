#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
//byte, int, long -> so nguyen
//float, double -> so thuc

//khai bao lien quan den so nguyen

int a = 10, b;
    b = 8;
	printf("Gia tri cua a va b: %d, %d\n", a, b);       
    printf("The number of bytes allocated of an 'int': %d\n", sizeof(int)); 
float pi = 3.14;
    printf("So pi:%f", pi);	
    printf("The number of bytes allocated of an 'double': %d\n", sizeof(double)); 
    
int size = sizeof(int);
    printf("The number of bytes allocated of an 'int': %d\n", size);         
    
int m = 3000000000; // vuot qua rang la 2ty1
    printf("gia tri dc in ra la: %d\n", m);    
    
	return 0;
}
