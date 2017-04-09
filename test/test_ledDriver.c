
#include "unity.h"
#include "ledDriver.h"

uint16_t address;

void setUp() {

}

void tearDown() {
	address = 0;
}

void testDriverCreateDebeApagarTodosLosLeds() {

	address = 0xFFFF;
	ledDriver_create(&address);
	TEST_ASSERT_EQUAL_HEX16(0x0000, address);
}
void testDriverCreateDebeEncenderIndividualLosLeds() {
	address = 0x0000;
	ledEncendido_individual(&address,3);
	TEST_ASSERT_EQUAL_HEX16(0x0008, address);

}
void testDriverCreateDebeApagarIndividualLosLeds() {
	address = 0xFFFF;
	ledApagado_individual(&address,2);
	TEST_ASSERT_EQUAL_HEX16(0xFFFB, address);

}
void testDriverCreateDebeApagarLosLeds() {
	address = 0xFFFF;
	ledApagado(&address);
	TEST_ASSERT_EQUAL_HEX16(0x0000, address);

}
void testDriverCreateDebeEncenderLosLeds() {
	address = 0x0000;
	ledEncendido(&address);
	TEST_ASSERT_EQUAL_HEX16(0xFFFF, address);

}
void testDriverCreateDebeEstadosDeLosLeds() {

	address = 0x0010;
	ESTADO = ledEstatus(&address,4);
	TEST_ASSERT_EQUAL_HEX16(1, ESTADO);

}
void testDriverCreateDebeValoresLimitesDeLosLeds() {
	address = 0xFFFF;
	ValLim = ledValoresLimites_Estado0(&address,0);
	TEST_ASSERT_EQUAL_HEX16(0, ValLim);

	address = 0x8000;
	ValLim = ledValoresLimites_Estado15(&address,15);
	TEST_ASSERT_EQUAL_HEX16(1, ValLim);

	address = 0x8000
	ValLim = ledValoresLimites_LedOn0(&address,0);
	TEST_ASSERT_EQUAL_HEX16(0, ValLim);

	address = 0x8000
	ValLim = ledValoresLimites_LedOn15(&address,15);
	TEST_ASSERT_EQUAL_HEX16(1, ValLim);

	address = 0x8000
	ValLim = ledValoresLimites_LedOff0(&address,0);
	TEST_ASSERT_EQUAL_HEX16(0, ValLim);

	address = 0x8000
	ValLim = ledValoresLimites_LedOff15(&address,15);
	TEST_ASSERT_EQUAL_HEX16(1, ValLim);

}
void testDriverCreateDebeValoresFueraDeLimitesDeLosLeds() {
	address = 0xFFFF;
	FueLim = ledValoresFueraLimites_Estado(&address,16);
	TEST_ASSERT_EQUAL_HEX16(-1, FueLim);

	FueLim = ledValoresFueraLimites_LedOn(&address,16);
	TEST_ASSERT_EQUAL_HEX16(-1, FueLim);

	FueLim = ledValoresFueraLimites_LedOff(&address,16);
	TEST_ASSERT_EQUAL_HEX16(-1, FueLim);

}
