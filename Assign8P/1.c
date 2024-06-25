#include <stdio.h>

void largest(int arr[], int n);
void sortArray(int arr[], int n);

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter all the elements of the array: ");
    for (int i=0; i<n; i++) {
        int a;
        scanf("%d", &a);
        arr[i] = a; 
    }
    largest(arr, n); // pass the size of the array to the function
    sortArray(arr,n);
    printf("The array after sorting is: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void largest (int arr[], int n) {
    int max = 0;
    for (int i=0; i<n; i++) {
        if (max < arr[i]) max = arr[i];
    }
    printf("The maximum of the array is : %d\n", max);
}

void sortArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=1; j<n-i; j++) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}