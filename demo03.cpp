#include<stdio.h>
#include<stdlib.h>

void insertElementArray(int **pArray, int *n, int position, int value);
void deleteElementArray(int **pArray, int *n, int position);

int main() {
    int n;
    int *pArray = NULL;
    int position, value;

    
    printf("Moi ban nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

   
    pArray = (int*) malloc(n * sizeof(int));

   
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", pArray + i);
    }

     
    printf("Mang hien tai: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }
 
    printf("\nNhap vao vi tri can chen: ");
    scanf("%d", &position);
    printf("Nhap vao gia tri can chen: ");
    scanf("%d", &value);
    insertElementArray(&pArray, &n, position, value);
 
    printf("\nSau khi chen: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }
 
    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &position);
    deleteElementArray(&pArray, &n, position);
 
    printf("\nSau khi xoa: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }
 
    free(pArray);
    return 0;
}
 
void insertElementArray(int **pArray, int *n, int position, int value) {
    if (position < 0 || position > *n) {
        printf("Vi tri can chen khong hop le\n");
        return;
    }
 
    *pArray = (int*) realloc(*pArray, (*n + 1) * sizeof(int));
 
    for (int i = *n; i > position; i--) {
        (*pArray)[i] = (*pArray)[i - 1];
    }
 
    (*pArray)[position] = value;
    (*n)++;
}

// Hàm xóa  
void deleteElementArray(int **pArray, int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Vi tri can xoa khong hop le\n");
        return;
    }

    // di chuyen ham sang trai
    for (int i = position; i < *n - 1; i++) {
        (*pArray)[i] = (*pArray)[i + 1];
    }

   
    *pArray = (int*) realloc(*pArray, (*n - 1) * sizeof(int));
    (*n)--;
 
    printf("Mang sau khi xoa: \n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = %d\n", i, (*pArray)[i]);
    }
}

