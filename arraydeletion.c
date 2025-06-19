#include <stdio.h>

int main() {
    int a[20];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Current array:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    int pos;
    printf("\nEnter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--; // Reduce size after deletion

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
