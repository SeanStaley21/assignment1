#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"

int main() {
	char name[] = "Sean Staley";
	reverse_order(name);
	letter_count(name);
	return 0;
}
