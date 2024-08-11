
#define N 10

int main()
{
	int vet[10];
	// int vet[N] = { 2,5,3,8,6,9,4,1,7,0 };
	int i = 0;
	int somma;
	int menu;
	int media;
	int j;

	for (i = 0; i < N; i++)
	{
		printf("dichiara il %d numero del vettore: ", i + 1);
        printf("%d", &vet[i]);
        scanf
    }

	printf_s("scegli 1, 2 o 3: ");

	scanf_s("%d", &menu);

	if (menu == 1) {


		printf_s("hai scelto la media dei numeri ");

		somma = 0;

		for (i = 0; i < N; i++) {

			somma = somma + vet[i];

		}

		media = somma / N;


		printf_s("la media e: %d ", media);


	}
	else if (menu == 2) {


		for (i = 0; i < N; i++) {

			for (j = 0; j < N; j++) {

				if (vet[i] < vet[j]) {

					int scambio = vet[i];

					vet[i] = vet[j];

					vet[j] = scambio;

				}
			}
		}

		for (i = 0; i < N; i++) {

			printf_s("\n %d", vet[i]);
		}
	}

	else if (menu == 3) {


		for (i = 0; i < N; i++) {

			for (j = 0; j < N; j++) {

				if (vet[i] > vet[j]) {

					int scambio = vet[i];

					vet[i] = vet[j];

					vet[j] = scambio;
				}
			}
		}

		for (i = 0; i < N; i++) {

			printf_s("\n %d", vet[i]);
		}
	}

}
