
#include <stdint.h>

void ledDriver_create(uint16_t *);
void ledEncendido_individual(uint16_t *address);
void ledApagado_individual(uint16_t *address);
void ledApagado(uint16_t *address);
void ledEncendido(uint16_t *address);
void ledEstatus(uint16_t *address);
void ledValoresLimites(uint16_t *address);
void ledValoresFueraLimites(uint16_t *address);
