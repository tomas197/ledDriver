
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
		int16_t ValLim;

		address = 0x0000;
		ValLim = ledEstatus(&address,0);
		TEST_ASSERT_EQUAL(0, ValLim);

		address = 0x8000;
		ValLim = ledEstatus(&address,15);
		TEST_ASSERT_EQUAL(1, ValLim);

		ValLim = ledEncendido_individual(&address,0);
		TEST_ASSERT_EQUAL(0, ValLim);

		ValLim = ledEncendido_individual(&address,15);
		TEST_ASSERT_EQUAL(0, ValLim);

		ValLim = ledApagado_individual(&address,0);
		TEST_ASSERT_EQUAL(0, ValLim);

		ValLim = ledApagado_individual(&address,15);
		TEST_ASSERT_EQUAL(0, ValLim);
}
void testDriverCreateDebeValoresFueraDeLimitesDeLosLeds() {
		int16_t FueLim;

		FueLim = ledEstatus(&address,18);
		TEST_ASSERT_EQUAL(-1, FueLim);

		FueLim = ledEncendido_individual(&address,25);
		TEST_ASSERT_EQUAL(-1, FueLim);

		FueLim = ledApagado_individual(&address,780);
		TEST_ASSERT_EQUAL(-1, FueLim);

}
