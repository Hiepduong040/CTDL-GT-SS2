#include <stdio.h>
#include <stdlib.h>

void deleteIndex(int **array, int *n, int h) {
    int position = -1;
    for (int i = 0; i < *n; i++) {
        if ((*array)[i] == h) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        for (int i = position; i < *n - 1; i++) {
            (*array)[i] = (*array)[i + 1];
        }

        // Resize the array
        *array = (int *) realloc(*array, (*n - 1) * sizeof(int));
        (*n)--;

        printf("Mang sau khi xoa phan tu %d la: ", h);
        for (int i = 0; i < *n; i++) {
            printf("%d ", (*array)[i]);
        }
        printf("\n");
        return;
    }

    printf("Phan tu %d khong tim thay trong mang.\n", h);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *array = NULL;
    array = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int h;
    printf("Nhap so can xoa: ");
    scanf("%d", &h);  
    deleteIndex(&array, &n, h);

    free(array);

    return 0;
}

