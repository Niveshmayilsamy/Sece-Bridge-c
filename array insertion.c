#include <stdio.h>

int main() {
    int a[10];
    int n, i;

    printf("Enter the size of the array (max 9): ");
    scanf("%d", &n);

    if (n >= 10) {
        printf("Size too large! Maximum allowed is 9 to allow space for insertion.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    int pos, data;
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the data to be inserted: ");
    scanf("%d", &data);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = data;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
