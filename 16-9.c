#include <stdio.h>

void addValue(int *arr, int *n, int j, int x){
	for(int i=*n; i>=j; i--){
		arr[i]=arr[i-1];
	}
	arr[j]=x;
	*n=*n+1;
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int index=3, newValue=10;
	
	addValue(&arr, &size, index, newValue);
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}