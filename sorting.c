#include <stdio.h>

int main() {
    printf("Program by Pranav\nRoll no. = 37\n");
    int n, i, j, count = 0, temp, op, swap = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the values for sorting:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe unsorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nThe options are:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");

    printf("Enter the operation to perform: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            count = 0;
            printf("\nSorting by Bubble Sort\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n - 1; j++) {
                    count++;
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j + 1];
                        arr[j + 1] = arr[j];
                        arr[j] = temp;
                        swap++;
                    }
                }
            }
            break;

        case 2:
            count = 0;
            printf("\nSorting by Selection Sort\n");
            for (i = 0; i < n; i++) {
                for (j = i + 1; j < n; j++) {
                    count++;
                    if (arr[i] > arr[j]) {
                        temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                        swap++;
                    }
                }
            }
            break;

        case 3:
            count = 0;
            printf("\nSorting by Insertion Sort\n");
            for (i = 1; i < n; i++) {
                for (j = 0; j < i; j++) {
                    count++;
                    if (arr[i] < arr[j]) {
                        swap++;
                        temp = arr[i];
                        for (int k = i; k > j; k--) {
                            arr[k] = arr[k - 1];
                        }
                        arr[j] = temp;
                        break;
                    }
                }
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("The sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nComparisons: %d\n", count);
    printf("Iterations: %d\n", i - 1);
    printf("Swaps: %d\n", swap);

    return 0;
}
