#include <stdlib.h>
#include <stdio.h>

void print_board(FILE* f, const unsigned short board[4][4]) {

	if (!f)
		return;

	for (int i = 0; i < 4; i++) {
		
		fprintf(f, "+----+----+----+----+\n");

		for (int k = 0; k < 4; k++) {

			char buffer[5];
			unsigned short a = board[i][k];

			if (a == 0)
				sprintf(buffer, " ");
			else
				sprintf(buffer, "%d", a);

			if (k == 0)
				fprintf(f, "|%4s|", buffer);
			else
				fprintf(f, "%4s|", buffer);

		}

		fprintf(f, "\n");
		
		if(i == 3)
			fprintf(f, "+----+----+----+----+\n");

	}

	return;

}