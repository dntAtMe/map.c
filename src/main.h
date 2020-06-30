#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct coords {
    uint8_t x;
    uint8_t y;
} coords;

struct point {
    coords pos;
    char* name;
};