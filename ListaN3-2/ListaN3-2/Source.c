#include "stdio.h"
#include "locale.h"

float d�vida = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exerc�cio 2\n");
	printf("Digite o valor do empr�stimo\n");
	scanf_s("%f", &d�vida);
	printf("Sua d�vida ap�s 6 meses � de: %.2f", d�vida + (d�vida * 0.05));

	_getch();
}
