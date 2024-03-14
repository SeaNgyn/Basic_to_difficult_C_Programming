#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[10];
	int pos = -1; // vi sao lai la -1, tai vi neu 10 o vi tri 0 thi neu gan 0 thi no se in vi tri thu 0 ma ko phai vi tri xuat hien so 10
	printf("Please input 10 numbers to check\n");
	for (int i = 0; i < 10; i++){
		printf("number%d:", i + 1);
		scanf("%d", &n[i]);					
	}
	
	for (int i = 0; i < 10; i++)
		printf("You have just input the number is: %d\n", n[i]);
	
	for (int i = 0; i < 10; i++)
		if (n[i] == 10){
			pos = i; 
			break;			
		}
	if (pos == -1)
		printf("ko tim thay 10");
	else 
		printf("tim thay 10 tai vi tri %d", (pos + 1));	
		
		
		
		
/* bien the cua bai tren
		int n[10];
		int pos = -1;

	printf("Please input 10 numbers to check\n");
	for (int i = 0; i < 10; i++){
		printf("number%d:", i + 1);
		scanf("%d", &n[i]);					
	}
		
	for (int i = 0; i < 10; i++)
	printf("You have just input the number is: %d\n", n[i]);
	int x;
	printf("What the number do you want to check:");
	scanf("%d", &x);	
	for (int i = 0; i < 10; i++)
		if (n[i] == x){
			pos = i; 
			break;			
		}
	if (pos == -1)
		printf("ko tim thay %d", x);
	else 
		printf("tim thay %d tai vi tri %d", x, (pos + 1)); */		
	
	return 0;
}
