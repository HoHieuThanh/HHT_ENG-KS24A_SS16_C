#include<stdio.h>

void reverse(int *inputString, int *reverseString){
	int j=4;
	for(int i=0; i<5; i++){
		reverseString[j]=inputString[i];
		j--;
	}
}

int main(){
	
	int reverseString[5];
	int inputString[5];
	for(int i=0; i<5; i++){
		scanf("%d", &inputString[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d ", inputString[i]);
	}
	printf("\n");
	reverse(&inputString, &reverseString);
	for(int i=0; i<5; i++){
		printf("%d ", reverseString[i]);
	}
	
	return 0;
}