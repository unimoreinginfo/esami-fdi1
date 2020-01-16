#include <stdlib.h>

unsigned int irpef(unsigned int stipendio, unsigned int* scaglioni, unsigned int* aliquote, size_t n) {

	unsigned int toPay = 0, endingIndex = -1;

	for (int i = 0; i < n; i++) {
			
		if (stipendio < scaglioni[i]) {
			endingIndex = i - 1;
			break;
		}

	}

	if (endingIndex == -1)
		endingIndex = n - 1;

	for (int i = 0; i < endingIndex; ++i) {

		unsigned int taxed = (scaglioni[i + 1] - scaglioni[i]) * aliquote[i] / 100;

		toPay += taxed;

	}

	toPay += (stipendio - scaglioni[endingIndex]) * aliquote[endingIndex] / 100;

	return toPay;

}