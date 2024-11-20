// bisestile.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <stdbool.h>



int main() {

	int anno;
	bool bisestile = false;

	printf("dichiara anno:");
	scanf("%d", &anno);

	if (anno % 400 == 0) {
		printf(" Anno e' bisestile (divisibile per 400) \n");
		bisestile = true;

	} else {
		printf(" Anno non e' divisibile per 400 \n");

		if (anno % 4 == 0) {
			printf(" Anno e' divisibile per 4 \n");
		
			if (anno % 100 == 0) {

				printf(" Anno non e' bisestile (perche' divisibile per 100) \n");

				bisestile = false;


			}
			else {
				printf(" Anno e' bisestile \n");
				bisestile = true;

			}

		}
		else {
			printf(" Anno non e' Bisestile");
			bisestile = false;
		}

	}

}
