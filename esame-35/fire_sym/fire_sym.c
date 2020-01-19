#include <string.h>
#include "fire_sym.h"

void propagate_fire(const struct forest *f)
{
	char **foresta = malloc(f->rows * sizeof(char*));
	for (int i = 0; i < f->rows; i++) {
		foresta[i] = f->data + f->cols*i;
	}
	char *f2 = malloc(f->rows*f->cols);
	memcpy(f2, f->data, f->rows*f->cols);
	char **foresta2 = malloc(f->rows * sizeof(char*));
	for (int i = 0; i < f->rows; i++) {
		foresta2[i] = f2 + f->cols*i;
	}

	for (int i = 0; i < f->rows; i++) {
		for (int j = 0; j < f->cols; j++) {
			if (foresta2[i][j] == 'F') {
				if (i > 0) {
					if(j >0)
						foresta[i - 1][j - 1] = 'F';
					foresta[i - 1][j] = 'F';
					if(j<f->cols-1)
						foresta[i - 1][j + 1] = 'F';
				}
				if (j > 0)
					foresta[i][j - 1] = 'F';
				if (j < f->cols - 1)
					foresta[i][j + 1] = 'F';
				if (i < f->rows - 1) {
					if (j < f->cols - 1)
						foresta[i + 1][j + 1] = 'F';
					if (j > 0)
						foresta[i + 1][j - 1] = 'F';
					foresta[i + 1][j] = 'F';
				}
			}
		}
	}
	free(f2);
	free(foresta);
	free(foresta2);
}

