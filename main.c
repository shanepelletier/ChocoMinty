#include <stdio.h>

int main() {
	printf("Welcome to ChocoMinty.\n");
	FILE *file;
	file = fopen("example.minty", "r");
	if (!file) {
		return 1;
	}
	fclose(file);
	return 0;
}
