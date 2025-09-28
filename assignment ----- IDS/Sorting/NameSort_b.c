#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char names[50][50], temp[50]; // max 50 names, each up to 49 chars

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // swap strings
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
