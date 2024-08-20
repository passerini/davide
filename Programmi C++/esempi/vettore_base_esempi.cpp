#include <stdio.h>
#include <iostream>
#include <cstring>

int main(){

int dimensione_vettore = 5;


// PRIMO esempio di assegnazione valori a un vettore
// int nome[dimensione_vettore];
// nome[0] = 456;
// nome[1] = 456;
// nome[2] = 456;
// nome[3] = 456;
// nome[4] = 456;

// SECONDO esempio di assegnazione valori a un vettore
// int nome[dimensione_vettore] = {5,3,9,7,8};

// TERZO esempio di assegnazione valori a un vettore
//assegno i valori con il ciclo FOR
int nome[dimensione_vettore];

for ( int i = 0; i < dimensione_vettore; i++)
{
    printf("inserisci un numero: \n");
    scanf("%d", &nome[i]);
    
    
    printf("il %d numero e': %d \n", i+1 , nome[i]);
}




}