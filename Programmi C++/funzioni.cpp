#include <iostream>
#define N 5
#define T 10

void inserimento(int arr[], int l);
int esclusione(int arr1[], int arr2[], int l, int arr3[]);
void stampa(int arr[], int l);

int main()
{
<<<<<<< HEAD
	int arr1[N], arr2[N], arr3[T];
	inserimento(arr1, N);
	inserimento(arr2, N);
	int l = esclusione(arr1, arr2, N, arr3);
	stampa(arr3, l);
}

void stampa(int arr[], int l) {
	for (int i = 0; i < l; i++) {
		printf("%d\n", arr[i]);
	}
}

int esclusione(int arr1[], int arr2[], int l, int arr3[]) {
	int l2 = 0;
	for (int i = 0; i < l; i++) {
		int found = 0;
		for (int j = 0; j < l; j++) {
			if (arr1[i] == arr2[j]) {
				found = 1;
				break;
			}
		}
		if (!found) {
			if (l2 == 0) {
				arr3[l2] = arr1[i];
				l2++;
			}
			else {
				int found2 = false;
				for (int j = 0; j < l2; j++) {
					if (arr1[i] == arr3[j]) {
						found2 = true;
						break;
					}
				}
				if (!found2) {
					arr3[l2] = arr1[i];
					l2++;
				}
			}
		}
	}
	return l2;
}

void inserimento(int arr[], int l) {
	for (int i = 0; i < l; i++) {
		printf("Inserire il valore %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}
=======
    printf("Init ");
    int arr1[N], arr2[N], arr3[T];
    inserimento(arr1, N);
    inserimento(arr2, N);
    int l = esclusione(arr1, arr2, N, arr3); 
    stampa(arr3, l);
}

void stampa(int arr[], int l)
{
    for (int i = 0; i < l; i++) 
    {
        printf("%d\n", arr[i]);
    }
}

int esclusione(int arr1[], int arr2[], int l, int arr3[])
{
    int l2 = 0;
    for (int i = 0; i < l; i++)
    {
        int found = 0;
        for (int j = 0; j < l; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            if (l2 == 0)
            {
                arr3[l2] = arr1[i];
                l2++;
            }
            else
            {
                int found2 = false;
                for (int j = 0; j < l2; j++)
                {
                    if (arr1[i] == arr3[j])
                    {
                        found2 = true;
                        break;
                    }
                }
                if (!found2)
                {
                    arr3[l2] = arr1[i];
                    l2++;
                }
            }
        }
    }
    return l2;
}

void inserimento(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("Inserire il valore %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
>>>>>>> 91793ed (sdfs)
