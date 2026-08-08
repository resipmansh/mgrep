#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	char buffer[100];
	FILE* file;

	file = fopen(argv[1], "rb");

	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		if (strstr(buffer, argv[2]) != NULL) {
			printf("%s", buffer);
		}
	}

	fclose(file);

	return 0;
}
