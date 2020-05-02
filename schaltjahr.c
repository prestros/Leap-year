// Programm zum erkennen von Schaltjahren
// Autor: Fabian Prestros
// Datum: 22.04.2020
#include <stdio.h>

int main(void)
{
	int chk, j = 0;
	
	printf("Bitte geben Sie eine Jahreszahl ein.\n");

	// Eingabeprüfung
	do
	{
		printf("Jahr = ");
		chk = scanf_s("%ld", &j);
		while (getchar() != '\n'); // Tastaturpuffer leeren.
		if(chk == 0)
			printf("Bitte geben Sie eine Jahreszahl ein.\n");
	} while (chk == 0);

	// Abfrage ob Schaltjahr
	if ((j % 4) == 0)
	{
		if ((j % 100) == 0)
		{
			if ((j % 400) == 0)
				printf("Schaltjahr!\n");
			else printf("Kein Schaltjahr!\n");
		}
		else printf("Schaltjahr\n");
	}
	else printf("Kein Schaltjahr\n");
}