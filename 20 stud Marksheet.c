#include <stdio.h>
#include <string.h>

#define STUDENTS 20
#define NAMELEN 50

int main() {
    char names[STUDENTS][NAMELEN];
    int marks[STUDENTS];

    printf("Enter names and marks for %d students:\n", STUDENTS);

    for (int i = 0; i < STUDENTS; i++) {
        scanf("%s %d", names[i], &marks[i]);
    }

    printf("\n--- Marksheet ---\n");
    printf("%-5s %-20s %s\n", "No.", "Name", "Mark");

    for (int i = 0; i < STUDENTS; i++) {
        printf("%-5d %-20s %d\n", i + 1, names[i], marks[i]);
    }

    return 0;
}
