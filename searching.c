#include <stdio.h>

int main() {
    printf("Program by Pranav\nRoll no. = 37\n");
    int i, n, count, flag = 0, val, op;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe list is:\n");
    for (i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    printf("\nOptions:\n");
    printf("1. Linear search\n");
    printf("2. Binary search\n");

    printf("Enter the operation to perform: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\nEnter the value to search for: ");
            scanf("%d", &val);
            printf("Linear search:\n");
            count = 0;

            for (i = 0; i < n; i++) {
                count++;
                if (arr[i] == val) {
                    flag = 1;
                    printf("Element found at %dth position\n", i + 1);
                    printf("Element found in %d comparisons\n", count);
                    break;
                }
            }

            if (flag == 0) {
                printf("Element not found\n");
            }
            break;

        case 2:
            // Sort the array in ascending order for binary search
            for (i = 1; i < n; i++) {
                int temp = arr[i];
                int j = i - 1;
                
                while (j >= 0 && arr[j] > temp) {
                    arr[j + 1] = arr[j];
                    j = j - 1;
                }
                arr[j + 1] = temp;
            }
            
            printf("\nEnter the value to search for: ");
            scanf("%d", &val);
            printf("Binary search:\n");
            count = 0;
            int left = 0;
            int right = n - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                count++;

                if (arr[mid] == val) {
                   printf("Element found at %dth position\n", mid + 1);
                    printf("Element found in %d comparisons\n", count);
                    flag = 1;
                    break;
                } 

                if (arr[mid] < val) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            if (flag == 0) {
                printf("Element not found\n");
            }
            break;

        default:
            printf("Invalid option\n");
    }

    return 0;
}
