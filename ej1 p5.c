#include <stdio.h>

int esPar (int val);

void main () {
	int numero;
	printf ("ingrese un numero ");
	scanf ("%i", &numero);
	
	if (esPar(numero)==0){
		printf ("es par");
		}
	
	else {
		printf ("no es par");
	}
}
	int esPar  (int val){
		int p;
		if (val%2==0){
			p=0;
		}
		else {
			p=1;
		}
		return p;
	}
