#include <stdio.h>
#include <stdlib.h>

void increment (int *array, int n ){
	for (int i = 0; i < n ; i++){
		for( int j = i +1; j < n; j++){
			if(array[j] < array[i]){
				int temp = array[j];
				array[j]=array[i];
				array[i]= temp;
				
			}			
		}
	}
}


int main(){
	int n;
	printf("Nhap n: ");
	// scanf("%d ", &n);
	scanf("%d", &n); 
	int *array = NULL;
	array = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d:", i +1);
		scanf("%d", &array[i]);
	}
	
	increment(array, n);
	
	printf("Cac phan tu duoc xap xep: ");
	for(int i = 0; i< n ; i++){
		printf("%d ",array[i] ); 
	}
	return 0;
}
