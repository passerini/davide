package main

import (
	"encoding/json"
	"fmt"
	"os"
	"time"
)

type MenuItem struct {
	ID          int    `json:"id"`
	Description string `json:"description"`
	Function    string `json:"function"`
}

type Menu struct {
	VociMenu []MenuItem `json:"menu"`
}

func main() {

	var menu Menu
	menu = LeggiFile("prog_03/menu.json")

	// Mostra il menu
	for {

		stampaMenu(menu)

		var scelta int
		fmt.Scanln(&scelta)

		for _, item := range menu.VociMenu {

			if item.ID == scelta {
				eseguiFunzione(item.Function)
				break
			}
		}

	}
}

func stampaMenu(menu Menu) {

	fmt.Println("Menu:")

	for _, item := range menu.VociMenu {
		fmt.Printf("%d. %s\n", item.ID, item.Description)
	}

	fmt.Print("Scegli un'opzione: ")
}

func LeggiFile(filename string) Menu {
	var menu Menu

	// Legge il file JSON
	file, err := os.ReadFile(filename)
	if err != nil {
		fmt.Println("Errore durante la lettura del file:", err)
	}

	if err := json.Unmarshal(file, &menu); err != nil {
		fmt.Println("Errore durante l'unmarshal del file JSON:", err)
	}

	return menu
}

func eseguiFunzione(functionName string) {
	switch functionName {
	case "stampaSaluto":
		stampaSaluto()
	case "mostraDataEOra":
		mostraDataEOra()
	case "calcolaSomma":
		calcolaSomma()
	case "esci":
		fmt.Println("Uscita dal programma.")
		os.Exit(0)
	default:
		fmt.Println("Funzione non valida.")
	}
}

func stampaSaluto() {
	fmt.Println("Ciao! Come stai?")
}

func mostraDataEOra() {
	fmt.Println("Data e ora corrente:", time.Now().Format("02/01/2006 15:04:05"))
}

func calcolaSomma() {
	var a, b int
	fmt.Print("Inserisci il primo numero: ")
	fmt.Scanln(&a)
	fmt.Print("Inserisci il secondo numero: ")
	fmt.Scanln(&b)
	fmt.Println("La somma è:", a+b)
}
