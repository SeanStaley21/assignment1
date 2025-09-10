#include <stdio.h>
#include <string.h>

// Macro for swapping two integers
#define swap(a, b) do { int temp = a; a = b; b = temp; } while(0)

// Struct for state info
struct State {
    int length;
    char name[20];
};

int main() {
    struct State states[10] = {
        {8, "Kentucky"},
        {8, "Colorado"},
        {7, "Florida"},
        {8, "Nebraska"},
        {8, "Louisiana"},
        {7, "Alabama"},
        {8, "Maryland"},
        {8, "Missouri"},
        {7, "Georgia"},
        {8, "Arkansas"}
    };

    // Bubble sort by length using pointers
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            struct State *a = &states[j];
            struct State *b = &states[j+1];
            if (a->length > b->length) {
                swap(a->length, b->length);
                char temp[20];
                strcpy(temp, a->name);
                strcpy(a->name, b->name);
                strcpy(b->name, temp);
            }
        }
    }

    // Print sorted array
    printf("Sorted states by name length:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s (%d)\n", states[i].name, states[i].length);
    }

    // Search for a state by length
    int search_length = 7;
    printf("\nStates with %d letters:\n", search_length);
    for (int i = 0; i < 10; i++) {
        if (states[i].length == search_length) {
            printf("%s\n", states[i].name);
        }
    }

    int first = 0, second = 5;
    swap(first, second);
    printf("\nAfter swap: first = %d, second = %d\n", first, second);

    return 0;
}
