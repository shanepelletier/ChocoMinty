#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *file;
	long length;
	char *buffer;
	if (argc < 2) {
	  return 1;
	}
	file = fopen(argv[1], "r");
	if (file == NULL) {
		return 1;
	}
	fseek(file, 0, SEEK_END);
	length = ftell(file);
	fseek(file, 0, SEEK_SET);
	buffer = (char *)malloc(length);
	fread(buffer, length, 1, file);
	fclose(file);
	printf("%s", buffer);
	return 0;
}
