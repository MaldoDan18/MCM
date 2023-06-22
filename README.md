#MCM
Equipo 3. Grupo 1CV4.

//Descripción del problema y la solución//

Programa diseñado para encontrar el Minimo Común Múltiplo de dos números enteros que proporciona el usuario.

Nuestro problema: Obtener el minimo comun multiplo de dos numero enteros. 
Solución: El programa realizara el calculo del Máximo común Divisor de los dos numero enteros ingresas. Despues, dividira la multiplicacion de esos dos numeros entre el MCD que se obtenga. El resultado será el Minimo Comun Multiplo que buscamos.

//CODIGO FUENTE//
```
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
]
```
//INDICACIONES//

Para poder ejecutar el programa es necesario descargarlo y utilizar cualquier compilador de lenguaje C, como lo son Dev C++, Visual estudio Code, entro otros. Tambien pueden usarse compiladores en línea como Programiz.
  1. Descargar el programa. Abrirlo en un compilador y ejecutar. Ingresar un numero entero como "primer numero". Dar "ENTERE.  Ingresar un numero entero como "segundo numero". Dar otro "ENTER". El resultado aparecera en un segundo.
  2. En caso de no poder descargar el archivo del programa, copiar y pegar el codigo fuente en un compilador apto para lenguaje C, y realizar los mismos pasos descritos en el inciso 1.

//EJEMPLO DE VALORES DE ENTRADA Y SALIDA//

Ejemplo 1:
Valores de entrada: 40 (primer número) y 20 (segundo numero)
Valores de salida esperados. Macimo Común Divisor=20 y Minimo común multiplo=40

Ejemplo 2:
Valores de entrada: 55 (primer número) y 35 (segundo numero)
Valores de salida esperados. Macimo Común Divisor=5 y Minimo común multiplo=385
