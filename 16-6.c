#include <stdio.h>

int find(int *arr, int x, int *j){
	for(int i=0; i<5; i++){
		if(arr[i]==x){
			*j = i;
		
			break;
		}
	}
	return *j;
}

int main(){
	
	int arr[5]={5,10,15,20,25};
	int value=20, index;
	find(&arr, value, &index);
	printf("Vi tri %d la: %d", value, index);
	
	return 0;
}