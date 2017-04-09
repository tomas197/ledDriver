
#include "ledDriver.h"

void ledDriver_create(uint16_t *address) {
	*address = 0x0000;
}
void ledEncendido_individual(uint16_t *address, uint16_t LED){
*address |= (1 << LED);
}
void ledApagado_individual(uint16_t *address, uint16_t LED){
*address &= ~(1 << LED);
}
void ledApagado(uint16_t *address){
*address = 0x0000;
}
void ledEncendido(uint16_t *address){
*address = 0xFFFF;
}
void ledEstatus(uint16_t *address, uint16_t LED){

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
void ledValoresLimites_Estado0(uint16_t *address, uint16_t LED){
ValLim = ledEstatus(&address, LED);
return ValLim;
}

void ledValoresLimites_Estado15(uint16_t *address, uint16_t LED){
ValLim = ledEstatus(&address, LED);
return ValLim;
}

void ledValoresLimites_LedOn0(uint16_t *address, uint16_t LED){
	ValLim = -1;
	if(LED < 16){
	ledEncendido_individual(&address, LED);
	ValLim = 1;
	}
return ValLim;
}

void ledValoresLimites_LedOn15(uint16_t *address, uint16_t LED){
	ValLim = -1;
	if(LED < 16){
	ledEncendido_individual(&address, LED);
	ValLim = 1;
	}
return ValLim;
}

void ledValoresLimites_LedOff0(uint16_t *address, uint16_t LED){
	ValLim = -1;
	if(LED < 16){
	ledApagado_individual(&address, LED);
	ValLim = 1;
	}
return ValLim;
}

void ledValoresLimites_LedOff15(uint16_t *address, uint16_t LED){
	ValLim = -1;
	if(LED < 16){
	ledApagado_individual(&address, LED);
	ValLim = 1;
	}
return ValLim;
}

void ledValoresFueraLimites_Estado(uint16_t *address, LED){
	FueLim = ledEstatus(&address, LED);
	return FueLim;
	}

	void ledValoresFueraLimites_LedOn(uint16_t *address, uint16_t LED){
		FueLim = -1;
		if(LED < 16){
		ledEncendido_individual(&address, LED);
		FueLim = 1;
		}
	return FueLim;
	}

	void ledValoresFueraLimites_LedOff(uint16_t *address, uint16_t LED){
		FueLim = -1;
		if(LED < 16){
		ledApagado_individual(&address, LED);
		FueLim = 1;
		}
	return FueLim;
	}
