#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int recursiveBinarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return recursiveBinarySearch(arr, mid + 1, high, target);
    else
        return recursiveBinarySearch(arr, low, mid - 1, target);
}

int main()
{
    int books[] = {101, 105, 110, 115, 120, 125, 130};
    int n = 7;
    int target = 120;

    int pos1 = binarySearch(books, n, target);
    printf("Iterative Search Position: %d\\n", pos1);

    int pos2 = recursiveBinarySearch(books, 0, n - 1, target);
    printf("Recursive Search Position: %d\\n", pos2);

    return 0;
}