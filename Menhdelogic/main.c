#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// kiem tra xem tuoi cua minh co la thanh xuan ko?
	
//	int age;
//	printf("Nhap so tuoi cua ban de biet co trong thanh xuan ko: ");
//	scanf("%d", &age);
//	
//	if (age >= 20 && age <= 30)	
//	{
//		printf("Chao thanh xuan");
//	}
//	else
//	{
//		printf("deo phai la thanh xuan roi haha");
//	}
		
	// viet mot doan code moi nhap vao 1 con so nguyen bat ki 
	// sau do in ra thong bao rang con so nay co nam ngoai
	// mien 1...100 hay ko
	
//	int a, b, c;
//	
//	printf("Input integer random: "); scanf("%d", &a);
//	if (a<1 || a>100){
//		printf("ur integer number is over [1...100]");
//	}
//	else {
//		printf("ur integer number is between from 1 to 100");
//	}

  char ch;
  int nvowels = 0 ;
  int consonats =0;
  int nothers =0;
  printf(" Nhap ch:");
do { 
 ch = getchar();
 ch = toupper(ch);
 if ((ch>='A') && (ch<'Z')){
 switch(ch){
   case'A':
   case'E':
   case'I':
   case'O':
   case'U': nvowels ++ ;
   break;
  //continue;
  default: consonats ++ ;
}
} else nothers = nothers ++;
    }
    while ( ch != '\n');
    printf("Nguyen am :%d\n",nvowels);
    printf("Phu am :%d\n",consonats);
    printf("Con lai:%d\n",nothers);
 getchar();

	
	return 0;
}
