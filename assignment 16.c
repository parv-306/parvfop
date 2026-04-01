#include <stdio.h>
#define MAX 100

void partitionEvenOdd(int arr[], int n, int evenArr[], int oddArr[], int *evenCount, int *oddCount);

int main() {
    int arr[MAX], evenArr[MAX], oddArr[MAX];
    int n, evenCount, oddCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    partitionEvenOdd(arr, n, evenArr, oddArr, &evenCount, &oddCount);

    printf("\nEven elements:\n");
    for(int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd elements:\n");
    for(int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    return 0;
}