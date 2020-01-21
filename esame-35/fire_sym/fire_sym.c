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

// Versione alternativa (idk magari è un po' più chiara) e scusa l'intrusione
void propagate_fire(const struct forest* f) {

	int total = f->cols * f->rows;
	char* newData = malloc(total);

	strncpy(newData, f->data, total);
	//newData[total] = 0;

	for (int i = 0; i < f->rows; i++) {

		for (int k = 0; k < f->cols; k++) {

			int currentIndex = (i * f->cols) + k,
				south = ((i + 1) * f->cols) + k,
				north = ((i - 1) * f->cols) + k,
				west = currentIndex - 1,
				east = currentIndex + 1,
				leftBorder = (i * f->cols),
				rightBorder = (i * f->cols) + f->cols - 1,
				northBorder = 0,
				southBorder = total - 1;

			// current to west
			if (west >= leftBorder && newData[currentIndex] == 'F' && f->data[currentIndex] != '.')
				newData[west] = 'F';

			// current to east
			if (east <= rightBorder && newData[currentIndex] == 'F' && f->data[currentIndex] != '.')
				newData[east] = 'F';

			// current to north
			if (north >= northBorder && newData[currentIndex] == 'F' && f->data[currentIndex] != '.')
				newData[north] = 'F';

			// current to south
			if (south <= southBorder && newData[currentIndex] == 'F' && f->data[currentIndex] != '.')
				newData[south] = 'F';

		}

	}

	strncpy(f->data, newData, total);
	free(newData);

}
