package main

import (
	"fmt"
	"time"
)

func main() {
	for {
		// Mostra il menu
		stampaMenu()

		var scelta int
		fmt.Scanln(&scelta)

		switch scelta {
		case 1:
			stampaSaluto()
		case 2:
			mostraDataEOra()
		case 3:
			calcolaSomma()
		case 4:
			fmt.Println(" Uscita dal programma.")
			return
		default:
			fmt.Println(" Scelta non valida. Riprova. ")
		}
	}
}

func stampaMenu() {
	fmt.Println("")
	fmt.Println("Menu:")
	fmt.Println("1. Stampa saluto")
	fmt.Println("2. Mostra data e ora")
	fmt.Println("3. Calcola somma di due numeri")
	fmt.Println("4. Esci")
	fmt.Println("")
	fmt.Print("Scegli un'opzione (1-4):  ")
}

func stampaSaluto() {
	fmt.Println(" Ciao! Come stai? ")
}

func mostraDataEOra() {
	// Per utilizzare questa funzione, è necessario importare il pacchetto time
	// "time"
	fmt.Println(" Data e ora corrente:", time.Now().Format("02/01/2006 15:04:05"))
}

func calcolaSomma() {
	var a, b int
	fmt.Print(" Inserisci il primo numero:  ")
	fmt.Scanln(&a)
	fmt.Print(" Inserisci il secondo numero:  ")
	fmt.Scanln(&b)
	fmt.Println(" La somma è:", a+b)
}
