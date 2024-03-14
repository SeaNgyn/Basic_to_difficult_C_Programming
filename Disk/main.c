#include <stdio.h>
#include <stdlib.h>


const float PI = 3.1415;
// const: hang so - ki hieu vung ram read-only ( chi xem so` chu ko sua dc value )
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viet app nhap vao ban kinh cua hinh tron, sau do in ra dien tich 
// Cong thuc tinh dien tich hinh tron: Pi * r^2
// Float: so thuc, so co thap phan, ...


int main(int argc, char *argv[]) {
	
	float radius, area;
	
	printf("input a radius of a disk: ");
	scanf("%f", &radius);
	
	
	area = PI * radius * radius;
	//area = 3.14 * radius * radius;
	
	printf("The area of a disk ( r = %f) is %f\n", radius, area);
	printf("The area of a disk ( r = %.4f) is %.4f\n", radius, area);
	
	
	
	
	
	
	
	return 0;
}
