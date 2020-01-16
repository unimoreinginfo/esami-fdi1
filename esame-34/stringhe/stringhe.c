#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *parola_piu_lunga(const char *sz) {
	int size = 0;
	char *retstr = NULL;
	char *s = malloc(strlen(sz)+1);
	while (sscanf(sz, "%s", s) == 1 && sz[0] != 0) {
		if (strlen(s) > size) {
			size = strlen(s);
			retstr = realloc(retstr, size+1);
			strcpy(retstr, s);
		}
		sz = sz +strlen(s);
	}

	free(s);
	
	return retstr;
}
