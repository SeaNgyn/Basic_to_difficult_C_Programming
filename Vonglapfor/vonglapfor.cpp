#include <stdio.h>
#include <stdlib.h>
int main(){
	int sum = 0;
	
	for (int i = 1; i <= 25; i++)
		sum = sum + i;
	printf("%d", sum);
	
	return 0;
}
