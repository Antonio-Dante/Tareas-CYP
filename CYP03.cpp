#include <stdio.h>
#include <iostream>

int main()
{
	int dia, mes, anio;
	scanf_s("%i", &dia);
	scanf_s("%i", &mes);
	scanf_s("%i", &anio);


	 if (mes == 12)
		if (dia == 31)
			printf("%2i %2i %4i", 1, 1, anio + 1);
		else
			printf("%2i %2i %4i", dia + 1, mes, anio);
	 else

		if (mes == 1, 3, 5, 7, 8, 10)
			if (dia == 31)
				printf("%2i %2i %4i", 1, mes + 1, anio);
			else
				printf("%2i %2i %4i", dia + 1, mes, anio);
		else	   
		    if (dia == 30)
			    printf("%2i %2i %4i", 1, mes + 1, anio);
		    else
			    printf("%2i %2i %4i", dia + 1, mes, anio);



}

