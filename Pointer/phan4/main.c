#include <stdio.h>
#include <stdlib.h>

// hack ram con tro
// 63 dau ? trong ascii la ky tu ? nhung trong nhi phan la 0011 1111
// 36  dau $                                               0010 0100 
// cpu se hieu 0000 0000   0000 0000   0011 1111   0010 0100
//					0 			0			63			36
//					-> 16.164
//					0.0.63.36
  
int main() {
	int gift = 16164;  // trong ram luu con so 4  byte
						// 2 byte duoi on off thanh con so 63 va 36
						
	int* c = &gift; // c tro vung 4 byte bat dau tu 64 den 68
					// nhay 4 byte 1 lan++, va convert thap phan thi dung 4 byte luon
					// *c -> se dung 4 byte de convert, vi hari tro dia chi int va cung la kieu int
					// chi nhin 4 byte de convert
						
	char* hack;		//  tao can 1 dia chi char thi la ngon nhat. La chuan
					// nhung o day deo co dia chi bien char thi lay dia chi bien gift la int (ko nen neu ko hieu ban chat)
					// vi hack la bien char nen no chi lay 1 byte de convert/ hay chi nhin 1 byte de convert thoi
	printf("gift address = %u\n", c);	
	
	printf("gift = %d\n", *c); //16164
	
	hack = &gift;
	printf("gift ra dau $ la chuan = %c\n", *hack);
	hack++; // ra dau ? la tuyet voi
	printf("gift ra dau ? la chuan = %c\n", *hack);
	
	
	
	
	
	return 0;
}
