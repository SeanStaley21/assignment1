#include <stdio.h>
#include <string.h>
#include "name_reverse.h"

void reverse_order(char *name) {
	char firstname[100], lastname[100];
	int i = 0, j = 0;

	// Find the space separating first and last name
	while (name[i] != ' ' && name[i] != '\0') {
		firstname[i] = name[i];
		i++;
	}
	firstname[i] = '\0';

	// Skip spaces
	while (name[i] == ' ') {
		i++;
	}

	// Copy last name
	while (name[i] != '\0') {
		lastname[j++] = name[i++];
	}
	lastname[j] = '\0';

	printf("%s %s\n", lastname, firstname);
}
