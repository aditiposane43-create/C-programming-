#include <stdio.h>

int main() {
    int intArray[3];
    float floatArray[3];
    char charArray[3];
    int i;

    // Accept integer array elements
    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &intArray[i]);
    }

    // Accept float array elements
    printf("Enter 3 float elements:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &floatArray[i]);
    }

    // Accept character array elements
    printf("Enter 3 character elements:\n");
    for (i = 0; i < 3; i++) {
        scanf(" %c", &charArray[i]);
    }

    // Display integer elements and addresses
    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %d, Address = %p\n",
               intArray[i], (void *)&intArray[i]);
    }

    // Display float elements and addresses
    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %.2f, Address = %p\n",
               floatArray[i], (void *)&floatArray[i]);
    }

    // Display character elements and addresses
    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %c, Address = %p\n",
               charArray[i], (void *)&charArray[i]);
    }

    return 0;
}