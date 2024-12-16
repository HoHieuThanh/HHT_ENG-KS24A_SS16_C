#include <stdio.h>

void change(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int x=1, y=2;
	printf("x = %d\ny = %d\n", x, y);
	change(&x, &y);
	printf("sau khi thay doi:\nx = %d\ny = %d", x, y);
	
	return 0;
}