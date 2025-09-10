#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"

int main() {
	char name[] = "Sean Staley";
	reverse_order(name);
	letter_count(name);
	

	// doing the int swap for show
    int first = 0, second = 5;
    printf("\nBefore swap: first = %d, second = %d\n", first, second);
    swap(first, second);
    printf("\nAfter swap: first = %d, second = %d\n", first, second);

	return 0;
}
