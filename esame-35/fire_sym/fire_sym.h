#ifndef FIRE_SYM_H
#define FIRE_SYM_H

#include <stdlib.h>

struct forest {
	size_t rows, cols;
	char *data;
};
extern void propagate_fire(const struct forest *f);

#endif /* FIRE_SYM_H */
