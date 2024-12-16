#include <stdio.h>

int tong(int *a, int *b, int *SUM){
	
	*SUM = *a + *b;
	
	return *SUM;
}
int main(){
	
	int x=1, y=2, sum;
	printf("%d + %d = ", x, y);
	tong(&x, &y, &sum);
	printf("%d", sum);
	
	return 0;
}