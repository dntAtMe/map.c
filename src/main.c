#include "main.h"

int main() {
    struct point p;

    uint8_t *x = &p.pos.x;
    uint8_t *y = &p.pos.y;

    *x = 1;
    *y = -1;
    p.name = malloc(sizeof(char) * 5);
    strcpy(p.name, "Point");

    printf("Point coords: %d %d \nPoint name: %s\n", *x, *y, p.name);
    printf("Main\n");
    return 0;
}
