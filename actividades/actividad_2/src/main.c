#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
	// Inicializo el USB
    stdio_init_all();
	// Demora para esperar la conexion
	sleep_ms(1000);
	int16_t ab;
	int16_t ba;
	// Cuanto ocupa cada tipo de dato
	printf("Un char ocupa %d byte\n", sizeof(char));
	printf("Un short ocupa %d bytes\n", sizeof(short));
	printf("Un int ocupa %d bytes\n", sizeof(int));
	printf("Un long int ocupa %d bytes\n", sizeof(long int));
	printf("Un float ocupa %d bytes\n", sizeof(float));
	printf("Un double ocupa %d bytes\n", sizeof(double));

    while (true) {
		printf ("  Dame un numero:\n");
		scanf ("%hd",&ab);9
		fflush (stdin);
		printf ("  Dame otro numero:\n");
		scanf ("%hd",&ba)
		fflush (stdin);
		printf("  El resultado es %hd\n", ab+ba);

    }
    return 0;
}
