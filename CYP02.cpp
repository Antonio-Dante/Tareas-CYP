#include <stdio.h>

void main(void)
{
	int TamaņoDelArchivo, PosicionPrimerPixel;
    scanf_s("%i", & TamaņoDelArchivo);
	scanf_s("%i", & PosicionPrimerPixel);

	printf("BM00000%X0000000000000%X", TamaņoDelArchivo, PosicionPrimerPixel);
}
