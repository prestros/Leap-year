// Programm zum Erkennen von Schaltjahren (vereinfacht)
// Autor: Fabian Prestros
// Datum: 09.01.2021

#include <stdio.h>

int main()
{
	int jahr = 0;
	int i = 0;

	printf("Bitte geben Sie ein Schaltjahr ein: ");
	scanf_s("%d", &jahr);

	if (jahr % 4 == 0)
		i++;
	if (jahr % 100 == 0)
		i--;
	if (jahr % 400 == 0)
		i++;
	if (i == 0)
		printf("%d ist kein Schaltjahr.", jahr);
	if (i == 1)
		printf("%d ist ein Schaltjahr.", jahr);
}