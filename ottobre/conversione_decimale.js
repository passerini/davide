const prompt = require('prompt-sync')();
let numero = prompt('Inserisci il numero da convertire in decimale: ');

let base = 2
let array = numero.split(""); // converto in array
array = array.reverse() // lo ribalto

let risultato = 0

for (let index = 0; index < array.length; index++) {
    const element = array[index];
    let num = parseInt(element)
    risultato = risultato + (num * (base ** index))
}

console.log( "Risultato =  "+ risultato)




