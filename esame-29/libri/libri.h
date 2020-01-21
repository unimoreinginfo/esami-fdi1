#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

struct libro {
    char* titolo;
    uint16_t* anni_ristampe;
};

bool libro_scrivi(const struct libro* p, FILE* f);
