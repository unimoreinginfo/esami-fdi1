#pragma once

#include <stdint.h>
#include <stdbool.h>

struct seq {
	size_t len;
	uint16_t* values;
};

bool seq_load(const char* filename, struct seq* s);
