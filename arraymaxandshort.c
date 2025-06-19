#include <stdio.h>

int main() {
    int a;
    printf("Enter the size: ");
    scanf("%d", &a);

    int ar2[a];

    printf("Enter the numbers:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &ar2[i]);
    }

    // Display original
    printf("The given values are: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", ar2[i]);
    }

    // Max value
    int max = ar2[0];
    for (int i = 1; i < a; i++) {
        if (ar2[i] > max) {
            max = ar2[i];
        }
    }
    printf("\nMaximum value is: %d\n", max);

    // Sorting (Bubble sort)
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - 1; j++) {
            if (ar2[j] > ar2[j + 1]) {
                int temp = ar2[j];
                ar2[j] = ar2[j + 1];
                ar2[j + 1] = temp;
            }
        }
    }

    printf("The sorted values are:\n");
    for (int i = 0; i < a; i++) {
        printf("%d ", ar2[i]);
    }

    // Spiral swap: reverse from both ends toward the center
    int first = ar2[0];
    for (int i = 0; i < a - 1; i++) {
         ar2[i] = ar2[i + 1];
        }
    ar2[a - 1] = first;

    printf("\nAfter spiral swap :\n");
    for (int i = 0; i < a; i++) {
        printf("%d ", ar2[i]);
    }

    return 0;
}
