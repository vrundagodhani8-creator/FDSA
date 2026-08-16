#include <stdio.h>

int main() {
    int n, h, i, temp;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter items: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter hours: ");
    scanf("%d", &h);
    
    h = h % n;

    while(h > 0) {
        temp = arr[0];

        for(i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];

        arr[n - 1] = temp;

        h--;
    }

    printf("Final display order: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}