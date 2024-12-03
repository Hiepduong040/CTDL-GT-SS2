#include <stdio.h>
#include <stdlib.h>

int main(){
	int n ;
	int max = 0;
	
	int *array = NULL;
	array = (int*) malloc(n * sizeof(int));
	printf("Nhap n :");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu %d:", i+1);
		scanf("%d", &array[i]);
	} 
	max = array[0];
	printf("Cac phan tu trong mang:");
	for (int i = 0; i< n; i++){
		printf("%d ;", array[i]);
	}
	printf("\n");
	for(int i = 0; i<  n; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	printf("Phan tu lon nhat la: %d",max);
	
} 
