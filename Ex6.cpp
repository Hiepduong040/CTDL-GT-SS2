#include <stdio.h>

int main(){
	int n,m;

	int count = 0;
 	printf("Nhap so phan tu mang 1: ");
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
	printf("Nhap so phan tu mang 2: ");
    scanf("%d", &m);
    int arr2[m];
    for(int i = 0; i < m; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr2[i]);
    }
	int arr[ n + m];
	count = 0;
  	for (int i = 0; i < n; i++) {
        arr[count++] = arr1[i];
    }
    for(int i = 0; i < n;i++){
 			int isDuplicate = 0;
    	for(int j=0;j<m;j++){
    		if(arr2[i] == arr[j]){
				 isDuplicate++;
				break;
			}
		}
      if(isDuplicate ==0){
			arr[count++] = arr2[i];
		}
	}
	printf("Cac phan tu trong mang sau khi gop: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
