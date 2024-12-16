#include <stdio.h>

void display(int *arr, int *n){
	for (int i=0; i<*n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

int main(){
	
	int arr[]={5,10,15,20,25};
	int size=sizeof(arr)/sizeof(int);
	printf("Cac phan tu trong mang la:\n");
	display(&arr, &size);
	
	return 0;
}