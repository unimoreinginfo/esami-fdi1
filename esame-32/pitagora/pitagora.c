#include <stdio.h>

void stampa_tavola_pitagorica(FILE* f, unsigned int n)
{
	for (unsigned int i = 1; i <= n; i++) {
		for (unsigned int j = 1; j <= n; j++) {
			fprintf(f, "%d", i * j);
			if (j == n) {
				fprintf(f, "\n");
			}
			else {
				fprintf(f, "\t");
			}
		}
	}
}

