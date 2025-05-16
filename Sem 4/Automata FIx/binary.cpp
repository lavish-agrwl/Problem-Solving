#include <iostream>
int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        if (arr[middle] == k)
            return middle;

        if (arr[middle] > k)
            end = middle - 1;

        else
            start = middle + 1;
    }

    return -1;
}
int main(){
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &k);
    int result = binarysearch(arr, n, k);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}