#ifndef TEST_H
#define TEST_H

#include <stdint.h>

int16_t ESTADO;


void ledDriver_create(uint16_t *);
int16_t ledEncendido_individual(uint16_t *, uint16_t);
int16_t ledApagado_individual(uint16_t *, uint16_t);
void ledApagado(uint16_t *);
void ledEncendido(uint16_t *);
uint16_t ledEstatus(uint16_t *, uint16_t);


#endif
