#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int save = 0;
	
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 0};
//	for (int i = 0; i < 10; i++){
//		if (a[i] == 10)
//			printf("da tim thay so 10\n");
//		else 
//			printf("ko tim thay so 10\n");
//		// tu duy sai vi ko thay cx in ma thay cx in, ta chi can biet la neu thay thi in ko thi thoi
//	}
	
//	for (int i = 0; i < 10; i++){
//		if (a[i] == 10){
//			printf("tim thay 10");
//			break;
//			}
//		else 
//			printf("ko thay 10");
//			break;	
			
		// lam nhu the nay van ko hay vi neu ko tim thay phai in ra va van phai kiem tra het moi dc in


// gan bien co de tim 

	for (int i = 0; i < 10; i++)
		if (a[i] == 10){
			save = 1;
			break;
		}
	if (save == 1)
		printf("tim thay 10");
	else 
		printf("ko tim thay 10");
	


		
				
		
		
		
	return 0;
}
