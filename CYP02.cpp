#include <stdio.h>

void main(void)
{
	int Tama�oDelArchivo, PosicionPrimerPixel;
    scanf_s("%i", & Tama�oDelArchivo);
	scanf_s("%i", & PosicionPrimerPixel);

	printf("BM00000%X0000000000000%X", Tama�oDelArchivo, PosicionPrimerPixel);
}
