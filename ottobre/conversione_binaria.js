const prompt = require('prompt-sync')();

const name = prompt('What is your name? ');

console.log(`Hey there ${name}`);

let numero = prompt('Inserisci il numero da convertire in binario: ');
let quoziente = numero
let base = 2
let resto = 0
let risultato = ""


    while (quoziente != 0) {

        // console.log("restituisce il quoziente senza resto")
        quoziente = Math.floor(numero / base); //restituisce il quoziente senza resto
    
        // console.log("calcolo il resto")
        resto = numero - (quoziente * base); //calcolo il resto
    
        numero = quoziente
    
        // console.log("aggiungo il resto alla variabile del risultato")
        risultato = resto + risultato // aggiungo il resto alla variabile del risultato
    
        // console.log("QUOZIENTE = " + quoziente + " con resto = " + resto)
    
    }
    
    console.log("Il numero convertito in binario è il seguente :" + risultato)




