// Write a program to perform a linear search in a user-defined array.
#include <stdio.h>

int main() {

    int arr[5];
    printf("Enter the elements :\n");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, p = -1;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            p = i;
            break;
        }
    }

    if (p != -1) {
        printf("Element found at index: %d\n", p);
    } else {
        printf("Element not found\n");
    }

    return 0;
}