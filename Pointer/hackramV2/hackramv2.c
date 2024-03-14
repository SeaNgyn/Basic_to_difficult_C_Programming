#include <stdio.h>
#include <stdlib.h>
// cheat engine
// co cach nao convert 1 con so binh thuong thanh dia chi ko
// xua nay, lay toa do phai la dau &
// tu nhien  


int main() {
	int yob = 2003;
	int* c;
	
	printf("the address of yob %u\n", &yob);
	printf("yob %d\n", yob);	
	// xem thu toa do
	// 6487580
	
	//c = &yob;
	//c = can 1 dia chi nao do, vd bien int
	//c = 6487580  day la con so ko phai dia chi, nhung dia chi la con so
	// neu la dia chi thi cat vao bien con tro int*
	c = (int*)6487572;  // dua con so qua (int*) de thanh dia chi
	
	printf("Yob now is: %d\n", *c);
	
	*c = 2003;
	printf("Yob final is: %d\n", yob);	
	return 0;
}
