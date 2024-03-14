#include <stdio.h>
#include <stdlib.h>

// hay luu 1 mang 5 con so nguyen 5 -10 15 20 -25
// phien ban oanh tac tu do, xin vung ram chua ai khai pha, HEAP
//xin ram, ko phai khai bao bien
// xin ram de luu du lieu, ko can dat ten vung ram, bien nhu ben stack
// vung HEAP goi la vung nho bien dong - dynamic - vung nho object cua oop



// vung stack windows quan li cuc ky chat che - hoat dong theo nguyen tac
//LIFO - last in first out 
// ham vua chay xong, huy ngay cac bien local

void printIntegerListHEAP() {
	int* p;
	int i;
	
	//p = (int*)malloc(so-byte-muon xin); // malloc() la ham, lenh xin ram o tren HEAP, khai hoang  
	

	p = (int*)malloc(20);		// vi la int nen xin boi so cua data type ma con tro dang tro
							// 20 byte da dc cap cho con tro int, 20/4 = 5
							// ham tra ve toa do/ dia chi cua byte dau tien trong 20 bytes
	p[0] = 1;
	p[1] = 1;
	p[2] = 2;
	p[3] = 3;
	p[4] = 4;
	
	printf("The array has values\n");
	for (i = 0; i < 5; i++)
		//printf("%d ", a[i]);
		printf("%d ", p[i]);
	
	free(p); // tra lai vung ram cho windows sau kh chay xong
				// neu khong free vung malloc ma cu chay app/ham nhieu lan la vung heap cu tang dan
				// ma windows ko lay lai duoc cho nen ram ram giam dan dung luong
				// -> ro ri memory, leak memory
} 


void printIntegerlist(){
	int a[] = {5, -10, 15, -20, 25};  // 5 bien x 4 byte = 20bytes stack
	// mang tinh, mang nam o trong ham, may se nam trong stack	
	int i;
	
	printf("The array has values\n");
	for (i = 0; i < 5; i++)
		//printf("%d ", a[i]);
		printf("%d ", *(a + i));
		printf("\n");
	int* p;
	p = a;
	for (i = 0; i < 5; i++)
		printf("%d ", p[i]);	
}
// nhap 1 mang tu ban phim
void inputArray() {
	int a[50];
	int i;
	printf("You are required to input 10 numbers\n");
	for (i = 0; i < 10; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (a + i)); // a = &a[0];
		
	}
		
	printf("%You have just inpute the following numbers\n");
	for (i = 0; i < 10; i++)
		printf("%d ", *(a + i));
	
}

void inputArrayV2() {
	// moi nhap 1 mang tu ban phim kich thuoc mang se khai bao sau
	// sau khi hoi ban muon may bien
	int n;
	int i;
	printf("How many numbers do you want to input? ");
	scanf("%d", &n);
	int a[n];
	
	printf("You are required to input %d numbers\n", n);
	for (i = 0; i < n; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (a + i)); // a = &a[0];
		
	}
		
	printf("%You have just inpute the following numbers\n");
	for (i = 0; i < n; i++)
		printf("%d ", *(a + i));
	
} 

void inputArrayHEAP() {
	int n;
	int i;
	printf("How many numbers do you want to input?(HEAP) ");
	scanf("%d", &n);
	int* hari = malloc(n * 4); // boi so cua 4 vi data type is int
	
	
	printf("You are required to input %d numbers\n", n);
	for (i = 0; i < n; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (hari + i)); // a = &a[0];
		
	}
		
	printf("%You have just inpute the following numbers\n");
	for (i = 0; i < n; i++)
		printf("%d ", hari[i]);
	
	free(hari);
	
}


int main() {
	inputArrayHEAP();	
	
	return 0;
}
