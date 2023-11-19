#include <stdio.h>

void main(void)
{
	int TamañoDelArchivo, PosicionPrimerPixel;
    scanf_s("%i", & TamañoDelArchivo);
	scanf_s("%i", & PosicionPrimerPixel);

	printf("BM00000%X0000000000000%X", TamañoDelArchivo, PosicionPrimerPixel);
}
