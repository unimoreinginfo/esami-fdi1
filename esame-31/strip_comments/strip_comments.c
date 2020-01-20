#include "strip_comments.h"

void strip_comments(const char* in_filename, const char* out_filename) {

	FILE* infile = fopen(in_filename, "r"), *outfile = fopen(out_filename, "w+");

	if (!infile || !outfile)
		return;

	int hashtag = 0, newFileSize = 0;

	while (!feof(infile)) {


		char c = fgetc(infile);

		if (c == '\n')
			hashtag = 0;

		if (c == '#')
			hashtag = 1;

		if (hashtag)
			continue;

		newFileSize++;

	}

	rewind(infile);
	hashtag = 0;
	char* str = malloc(newFileSize), i = 0;


	while (!feof(infile)) {

		char c = fgetc(infile);

		if (c == '\n')
			hashtag = 0;

		if (c == '#')
			hashtag = 1;

		if (hashtag)
			continue;

		str[i++] = c;

	}

	str[newFileSize - 1] = 0;

	printf("%s", str);

	fprintf(outfile, "%s", str);

	free(str);
	fclose(outfile);
	fclose(infile);


}