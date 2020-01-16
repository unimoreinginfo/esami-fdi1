#ifndef RATIONAL_H
#define RATIONAL_H

struct rational {
	int num;
	unsigned int den;
};

extern void rational_sum(struct rational *sum, const struct rational *first,
	const struct rational *second);

#endif /* RATIONAL_H */
