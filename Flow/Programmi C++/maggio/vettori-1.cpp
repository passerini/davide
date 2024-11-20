#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    int vector[size];

    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &vector[i]);
    }

    printf("The vector elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }

    return 0;
}