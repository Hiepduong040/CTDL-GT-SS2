#include <stdio.h>
#include <stdlib.h>

void reverse(int *array, int n ){
	int start = 0;
	int end = n -1;
	while (start < end){
		int temp = array[start];
		array[start]= array[end];
		array[end] = temp;
		start++;
		end--;
	}
}

int main(){
	int n ;
	printf("Nhap so n:");
	scanf("%d",&n);
	int *array = NULL;
	array = (int *)malloc (n * sizeof(int ));
	for (int i = 0; i< n; i++){
		printf("Nhap phan tu thu %d :", i+1);
		scanf("%d", &array[i]);
	}
	reverse(array,n);
	printf("Cac phan tu trong mang bi dao nguoc:");
	for(int i = 0; i < n; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
