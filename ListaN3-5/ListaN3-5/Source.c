#include "stdio.h"
#include "locale.h"

int idade = 0;

void main() {
	setlocale(LC_ALL, "portuguese");
	printf("Exerc�cio 5\n");
	printf("Digite a idade\n");
	scanf_s("%i", &idade);
	if (idade > 10 && idade < 18) {
		printf("A idade est� entre 10 e 18 anos");
	}
	else {
		printf("A idade n�o est� no intervalo pretendido.");
	}
	_getch();
}