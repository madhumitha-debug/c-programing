#include <stdio.h>

int main() {
    int n, key, i, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;   
            break;     
        }
    }

    if(pos != -1)
        printf("First occurrence of %d is at position %d\n", key, pos);
    else
        printf("-1\n");

    return 0;
}

