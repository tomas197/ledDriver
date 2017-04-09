
#include <stdint.h>
uint16_t ESTADO;
uint16_t ValLim;
uint16_t FueLim;
void ledDriver_create(uint16_t *);
void ledEncendido_individual(uint16_t *, uint16_t);
void ledApagado_individual(uint16_t *, uint16_t);
void ledApagado(uint16_t *);
void ledEncendido(uint16_t *);
void ledEstatus(uint16_t *, uint16_t);
void ledValoresLimites_Estado0(uint16_t *, uint16_t);
void ledValoresLimites_Estado15(uint16_t *, uint16_t);
void ledValoresLimites_LedOn0(uint16_t *, uint16_t);
void ledValoresLimites_LedOn15(uint16_t *, uint16_t);
void ledValoresLimites_LedOff0(uint16_t *, uint16_t);
void ledValoresLimites_LedOff15(uint16_t *, uint16_t);
void ledValoresFueraLimites_Estado(uint16_t *, uint16_t);
void ledValoresFueraLimites_LedOn(uint16_t *, uint16_t);
void ledValoresFueraLimites_LedOff(uint16_t *, uint16_t);
