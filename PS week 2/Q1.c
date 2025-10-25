#include <stdio.h>
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n, i;
	printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	int sum = sumArray(arr, n);
	printf("Sum of the array elements = %d\n", sum);
	return 0;
}

