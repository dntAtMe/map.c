#include "main.h"

static size_t ENTITIES = -1;

typedef struct component_lists
{
    Position position_components[10];
    Health health_components[10];

    size_t total_position_components;
    size_t total_health_components;
} ComponentLists;

void create_entity(ComponentLists* components)
{
    size_t id = ENTITIES++;
    components->position_components[id].entity_id = id;
}


int main()
{
    ComponentLists *components;
    
    create_entity(components);

    printf("Main\n");
    printf("Entity ID: %ld \n", components->position_components[ENTITIES].entity_id);
    return 0;
}
