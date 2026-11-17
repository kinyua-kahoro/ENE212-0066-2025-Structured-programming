#include <stdio.h>

int main() {
    int n, i, val, pos;
    printf("Input the size of array :");
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for the new element
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The current list of the array : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Input the value to be inserted :");
    scanf("%d", &val);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    printf("After inserting the element the new list is : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
