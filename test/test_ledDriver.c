
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
	TEST_ASSERT_EQUAL_HEX16(0, address);
}
void testDriverCreateDebeEncenderIndividualLosLeds() {
	address = 0xFFFF;
	ledEncendido_individual(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeApagarIndividualLosLeds() {
	address = 0xFFFF;
	ledApagado_individual(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeApagarLosLeds() {
	address = 0xFFFF;
	ledApagado(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeEncenderLosLeds() {
	address = 0xFFFF;
	ledEncendido(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeEstadosDeLosLeds() {
	address = 0xFFFF;
	ledEstatus(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeValoresLimitesDeLosLeds() {
	address = 0xFFFF;
	ledValoresLimites(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
void testDriverCreateDebeValoresFueraDeLimitesDeLosLeds() {
	address = 0xFFFF;
	ledValoresFueraLimites(&address);
	TEST_ASSERT_EQUAL_HEX16(0, address);

}
