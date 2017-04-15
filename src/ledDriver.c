
#include "ledDriver.h"

void ledDriver_create(uint16_t *address) {
	*address = 0x0000;
}
int16_t ledEncendido_individual(uint16_t *address, uint16_t LED){
	int16_t prendido = -1;

	if (LED < 16)  {
		*address |= (1 << LED);
		prendido = 0;
	}
	return prendido;
}
int16_t ledApagado_individual(uint16_t *address, uint16_t LED){
	int16_t apagado = -1;

		if (LED < 16)  {
			*address &= ~(1 << LED);
			apagado = 0;
		}
		return apagado;
}
void ledApagado(uint16_t *address){
*address = 0x0000;
}
void ledEncendido(uint16_t *address){
*address = 0xFFFF;
}
uint16_t ledEstatus(uint16_t *address, uint16_t LED){
	ESTADO = -1;
	
	if (LED < 16)  {
			ESTADO = *address & (1<<LED);

			if (ESTADO)  {
				ESTADO = 1;
			}
			else  {
				ESTADO = 0;
			}
		}
		return ESTADO;
}
