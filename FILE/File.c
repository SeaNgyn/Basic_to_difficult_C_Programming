#include <stdio.h>
#include <stdlib.h>

void writeFile(); // ghi tu ram xuong dia cung
void readFile();	// doc tu dia cung vao ram



int main() {
	//writeFile();
	readFile();

	
	return 0;
}

void writeFile() {
													// save 1 tap tin
	FILE* f = fopen("Tentaptinla'Tu-Ay'.txt", "a");  // attend vao duoi
	fprintf(f, "Tu ay trong toi bung code gao\n");
	fprintf(f, "Man hinh code do cua con tim\n");
	fprintf(f, "Hon toi ngap tran do-for-if\n");
	fprintf(f, "Rat nhi phan va day tieng do la\n");
	fclose(f);
	printf("The file is created successfull ");
	
}



void readFile() {
	// ham nay la mo tap tin ra doc.
	FILE* f = fopen("Tentaptinla'Tu-Ay'.txt", "r");	// open 1 tap tin
	char ch;	// bien luu 1 ky tu
	do {
		ch = fgetc(f);
		printf("%c", ch);
		
	} while (ch != EOF);
	
	fclose(f);
	
}



