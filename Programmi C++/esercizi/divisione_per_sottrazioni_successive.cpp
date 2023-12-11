#include <iostream>

int main()
{

	int N1, N2;

	int resto = 0;

	int contatore = 0;

	int scambio = 0;

	printf("dichiara il primo numero");
	scanf("%d", &N1);

	printf("dichiara il secondo numero");
	scanf("%d", &N2);

	if (N2 > N1)
	{

		scambio = N2;

		N2 = N1;

		N1 = scambio;
	}

	while (N1 >= N2)
	{

		N1 = N1 - N2;

		resto = N1;

		contatore++;
	}

	printf("il risultato della divisione e': %d \n", contatore);
	printf("con resto: %d \n", resto);
}