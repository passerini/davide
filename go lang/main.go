package main

import "fmt"

func main() {
	var testo string

	// Chiedi all'utente di inserire un testo
	fmt.Print("Inserisci un testo: ")
	fmt.Scanln(&testo)

	// Stampiamo il testo inserito nel terminale
	fmt.Println("Hai inserito:", testo)
}
