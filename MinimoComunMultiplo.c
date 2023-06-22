/*Equipo 3. Daniela del Carmen Maldonado Bedolla */
#include<stdio.h>

int main() {
	int maschico;
	int masgrande;
	int mcd;
	float mcm;
	int num1;
	int num2;
	int numero1;
	int numero2;
	int resto;
	printf("Ingrese el primer número:\n");
	scanf("%i",&numero1);
	printf("Ingrese el segundo número:\n");
	scanf("%i",&numero2);
	/* Muestra el procedimiento paso a paso */
	printf("Procedimiento para obtener el MCM de %i y %i\n",numero1,numero2);
	printf("     \n");
	printf("1. Obtener MCD\n");
	printf("Para ello identificamos el numero mayor y el menor\n");
	if (numero1>numero2) {
		printf("Numero mayor: %i\n",numero1);
	} else {
		printf("Numero mayor: %i\n",numero2);
	}
	if (numero1<numero2) {
		printf("Numero menor: %i\n",numero1);
	} else {
		printf("Numero menor: %i\n",numero2);
	}
	/* Encuentrar el máximo común divisor (MCD) utilizando el algoritmo de Euclides */
	resto = 0;
	num1 = numero1;
	num2 = numero2;
	while (num2!=0) {
		resto = num1%num2;
		num1 = num2;
		num2 = resto;
	}
	mcd = num1;
	printf("     \n");
	printf("El maximo común divisor es : %i\n",mcd);
	printf("     \n");
	/* Calcula el Minimo Común Multiplo utilizando la fórmula mcm = (num1 * num2) / mcd  */
	printf("2. Calcula el minimo común múltiplo (MCM):\n");
	printf("     \n");
	printf("El minimo común multiplo se obtiene al dividir la multiplicación de ambos numeros entre su maximo comun divisor\n");
	printf("     \n");
	printf("Es decir. MCM = (número 1 * número 2) / Maximo común divirsor\n");
	printf("MCM = (%i * %i) / Maximo común divirsor\n",numero1,numero2);

	mcm = (numero1*numero2)/mcd;
	printf("     \n");
	printf("El mínimo común multiplo es: %.0f\n",mcm);
	return 0;
}

