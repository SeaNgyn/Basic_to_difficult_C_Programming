#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int year, age;
	
	// thu nghiem
	//printf("your year of birth is %d\n", yob);
	// xin bien, xin dat, mua dat trong ram, declare a variable 
	// ma khong gan value, thi vung ram co san nay truoc do co the co on off cua app khac truoc do de lai
	// neu minh in value thi ta van se co mot gia tri nao do, goi la garbage value 
	// nguy hiem cho app vi app xu li sai...
	//printf("please in put your ages:");
	
	printf("what year were you born:");
	scanf("%d", &year);
	
	age = 2022 - year;
	
	printf("ur age is:%d", age); 
	

	

	
	


	
	
/*	age = 2022 - year;
	
	printf("Is your %d years old?\n"); 

     int grade = 10;
    printf("ur point is:%d\n", grade);
	printf("the address of grade is:%u", &grade); */
	
	
	
	return 0;
}
