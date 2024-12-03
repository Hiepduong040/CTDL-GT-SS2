#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int count =0;
	int num;
	int *array = NULL;
	array = (int*) malloc(n * sizeof(int));
	printf("nhap n :");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu %d :", i + 1);
		scanf("%d", &array[i]);
		
	}
	printf("cac phan tu trong mang:");
	for (int i = 0; i< n; i++){
		printf("%d ", array[i]);
	}
	printf("/n Nhap so: ");
	scanf("%d", &num);
	for(int i = 0; i < n;i++){
		if(array[i] == num){
			count++;
		}
	} 
	printf("So lan xuat hien %d", count);
}

