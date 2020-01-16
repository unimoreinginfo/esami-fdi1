int* rimuovi_multipli(const int* v, size_t size, size_t* newsize) {

	if (!v) {
		*newsize = 0;
		return NULL;
	}

	int nonMultiple = 0;

	for (int i = 0; i < size; i++) { // conto quanti numeri ci sono non multipli

		int current = v[i];

		for (int k = 0; k < size; k++) { // parto dall'elemento 0 fino alla fine per ogni numero, così controllo se ci sono multipli

			if (current % v[k] == 0 && k != i)
				break;
			else if (k == size - 1) // se arrivo alla fine dell'array e non ho trovato multipli allora ok!
				nonMultiple++;
		}

	}

	*newsize = nonMultiple;
	int newIndex = 0;

	int* cleared = malloc(nonMultiple * sizeof(int));

	for (int i = 0; i < size; i++) {

		int current = v[i];

		for (int k = 0; k < size; k++) {

			if (current % v[k] == 0 && k != i)
				break;
			else if (k == size - 1)
				cleared[newIndex++] = current; // faccio la stessa cosa di prima ma aggiungendo i numeri all'array creato dinamicamente
		}

	}

	return cleared;

}