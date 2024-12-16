#include <stdio.h>

void update(int *arr, int j, int x){
	arr[j]=x;
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int index=3, newValue=10;
	
	update (&arr, index, newValue);
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}