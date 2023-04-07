#include <stdio.h>
#define SIZE 100

int main() {
    int arr[SIZE], temp[SIZE];
    int n, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    j = 0;
    for(i=0; i<n; i++) {
        if(arr[i] < 0) {
            temp[j] = arr[i];
            j++;
        }
    }
    for(i=0; i<n; i++) {
        if(arr[i] >= 0) {
            temp[j] = arr[i];
            j++;
        }
    }
    for(i=0; i<n; i++) {
        arr[i] = temp[i];
    }
    printf("The sorted array with negative elements on one side is: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

