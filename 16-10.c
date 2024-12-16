#include <stdio.h>

void deleteValue(int *arr, int *n, int j){
	for(int i=j; i<*n; i++){
		arr[i]=arr[i+1];
		*n=*n-1;
	}
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int index=3;
	
	deleteValue(&arr, &size, index);
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}