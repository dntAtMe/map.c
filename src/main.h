#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct position {
    size_t entity_id;
    uint8_t x;
    uint8_t y;
} Position;

typedef struct health {
    size_t entity_id;
    uint8_t current_health;
    uint8_t max_health;
} Health;
