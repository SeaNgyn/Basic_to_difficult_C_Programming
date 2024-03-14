#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Chuoi la 1 dam cac ky tu dung sat nhau thi thanh 1 cau hay con goi la string: chuoi ky tu

//VD: S O S
//1 dam ky tu o sat nhau chi co the la mang
// chuoi la 1 mang ki tu
// muon luu 1 dam ky tu lien nhau, de lat in ra
//can 1 mang ky tu
//chuoi la 1 mang ki tu
// nhung mang ky tu ko co nghia la chuoi
// chuoi la 1 mang ki tu va ket thuc boi ki tu null
//tai sao can ket thuc?
// deo ranh de dem het 50 dong khi chi co 3 dong ton tai nen phai can co ki hieu bao ket thuc



void storeName() {
	int i;
	char name[] = {'S', 'O', 'S', '\0', '$', '#'};
	// ki tu dc quyen dung theo 2 cach la ma ascii hoac so decimal
	printf("Your name: %s\n", name);
	// %s quet den null
	// ham xem do dai cua chuoi
	
	int len = strlen(name);
	printf("The length of ur name: %d\n", len);
	printf("Your name(printed by using for)\n");
	for (i = 0; i < 6; i++)
		printf("%c", name[i]); // dang choi theo mang nha
	
}

// tu chen null vao cuoi
void storeNameV2() {
	char name[] = "Nguyen the anh";
	printf("your name is: %s\n", name);

	int len = strlen(name);
	printf("The length of ur name: %d\n", len);
}

// doi ki tu thuong sang hoa cua 1 chuoi
void storeNameV3() {
	char name[50] = "the.anh";	// doi ten thanh chu hoa
	printf("The original name : %s\n", name);   // %s thi C se tu dong * de lay gia tri tung mang la cac ky tu	
	// doi tu thuong sang hoa
	// quet qua tat ca cac ky tu, +- 32 tuy hoa thuong
	// a: 97 A: 65 cach nhau 32 don vi
	int i, l;
//	for (i = 0; i < strlen(name); i++)
//		name[i] = name[i] - 32;  // name[i] la tung ky tu le
//								// nhung ko phai ky tu no cung doi nhung ko phai thanh hoa 
	l = strlen(name);
	for (i = 0; i < l; i++)
		//if (name[i] >= 97 && name[i] <= 122)	
		if (name[i] >= 'a' && name[i] <= 'z')	
			name[i] -= 32; // ky tu khac de o quan tam
			
		
			printf("The upper case name: %s\n", name);
		
	
	
}
// thuong sang hoa ban de hon
void storeNameV4() {
	char name[50] = "abc.de";	
	printf("The original name : %s\n", name);
	strupr(name); // truyen tham chieu,
					// truyen con tro
					// ham chay xong name bi thay doi
	printf("The upper case name: %s\n", name);	
}


void storeNameV5() {
	char name[10];
	int yob = 2003;
//	printf("Input your name: ");
//	scanf("%9[^\n]", name);// toi da nhan la 9 vi thua ra 1 cho de chua null.
//	printf("%s\n", name);
//	printf("%d\n", yob);
	printf("Input your name: ");
	gets(name);
	puts(name);
	printf("%s\n", name);
		
}
// gan gia tri cho mang, cho chuoi, co rat nhieu cach, trong so do co strcpy();
void storeNameV6() {
	char name[50] = "the anh ahahaha";
	char name1[50];
	
	strcpy(name1, name);
	//copy tun gky tu ke ca null tu name sang name 1;
	puts(name1);
	printf("%s", name1);
	
	
	
}
int main() {
	//storeName();
	//storeNameV2();
	//storeNameV3();
	//storeNameV4();
	//storeNameV5();
	storeNameV6();	
	return 0;
}
