#include "stdio.h"
#include "locale.h"

float base, altura, perimetro, area;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exerc�cio 3\n");
	printf("Digite o valor da base do ret�ngulo\n");
	scanf_s("%f", &base);
	printf("Digite o valor da altura do ret�ngulo\n");
	scanf_s("%f", &altura);
	printf("O per�metro do ret�ngulo � de %.2f e a �rea � de %.2f", 2 * (base + altura), base * altura);

	_getch();
}