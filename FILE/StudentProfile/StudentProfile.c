#include <stdio.h>
#include <stdlib.h>

// ta lam toan bo cac thao tac tren tap tin qua cac ham void ko tham so ko dau vao
char ch = 'N';
void saveAchar() { // luu 1 ky tu ra tap tin tren o dia
	FILE* f = fopen("char.txt", "a");
					// ten tap tin co the kem duong dan, path
					//D:\\music\\char.txt
//	fprintf(f, "%c", 'A');
	fprintf(f, "%c", ch);
	
	fclose(f);
	
	printf("The A character has been written to the file successfully\n");


}


void openAchar() { // doc ky tu dang co trong tap tin
	char ch;
	FILE* f = fopen("char.txt", "r");
	
	
	printf("The contents of char.txt:\n");
	ch = fgetc(f);
	printf("%c", ch);
	fclose(f);
	
}

void openChars() {	// ham doc nhieu ky tu trong tap tin, do tap tin chua nhieu ky tu
	char ch;
	FILE* f = fopen("char.txt", "r");
	printf("The contents of char.txt:\n");
	ch = fgetc(f);
	printf("%c", ch);
	
	ch = fgetc(f);
	printf("%c", ch);
	
	fclose(f);
	
	
}

void openCharsV2() { // tap tin co nhieu ky tu nen dung vong lap cho den khi gap EOF
	char ch;
	FILE* f = fopen("Document-Nhap-tu-Ban-Phim.txt", "r");
	printf("The contents of char.txt:\n");
	
	do{
		ch = fgetc(f);
		printf("%c", ch);
	} while ( ch != EOF);
	
	
	fclose(f);


}

void saveAdocument() { // ham moi nguoi dung nhap 1 van ban tu ban phim co the nhap dau cach, enter, xuong dong, space
						// 	dung cac phim ctrl - phim
						//					alt- phim
											// window- phim de ket thuc
	char ch;
	FILE* f = fopen("Document-Nhap-tu-Ban-Phim.txt", "a");
	printf("The contents of char.txt which you will input here. Use the ctrl - s to stop and save the document:\n");
	
	do{
		ch = getchar(); // cu go di tao khac gan vao cho may, eo can enter, chinh xac la go - gan - save, den khi ctrl-s
		
		//fprintf("%c", ch);
		fputc(ch, f);
	} while ( ch != 19);	// khi nao chua go ctrl-s chua cho thoat hay 19 chinh la ma ascii cua ctrl-s
	
	
	fclose(f);

	printf("Your document inputted!!!");
}

int main() {
	//saveAchar();
	//openAchar();
	//openChars();
	openCharsV2();
	//saveAdocument();
	return 0;
}
