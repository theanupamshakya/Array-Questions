//Write a c program to store N elements in 1 D array then check whether the given sequence of elements is in AP or not.

#include <stdio.h>
#define MAX 100
int APSeries(int arr[], int n)
{
    int d = arr[0] - arr[1];
    for (int i=1; i<n-1;i++) {
        if (arr[i+1]-arr[i] != d) {
            return 0;
        }
    }
    return d;
}

int main() {
    int n, i;
    int arr[MAX];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }


    int d = APSeries(arr, n);

    if (d) {
        printf("The sequence is in AP %d.\n", d);
    } else {
        printf("The sequence is not in AP.\n");
    }

    return 0;
}
