#include <stdio.h>

int main(){
	
	int n=5;
	int *nPtr=&n;
	printf("Gia tri: %d\n", n);
	printf("Gia tri: %d\n", *nPtr);
	printf("Dia chi: %d\n", &n);
	printf("Dia chi: %d\n", nPtr);
	
	return 0;
}