#include "stdio.h"
#include "math.h"
#include "locale.h"

int numero = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exerc�cio 4\n");
	printf("Digite o n�mero\n");
	scanf_s("%i", &numero);
	if (numero % 3 == 0 && numero % 6 == 0) {
		printf("%d � divis�vel por 3 e por 6", numero);
	}
	else {
		printf("%i n�o � divis�vel por 3 e por 6", numero);
	}
	_getch();
}