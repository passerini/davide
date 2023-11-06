const prompt = require('prompt-sync')();

console.log(`\nScegli cosa vuoi fare: \n`);
console.log(`1) convertire un numero decimale in binario `);
console.log(`2) convertire un numero binario in decimale `);

const conversione = prompt('\n Opzione 1 oppure 2 ? ');

// const num_da_convertire = require('prompt-sync')();
let numero = prompt('Inserisci il numero da convertire ');

if (conversione === "1") {
    console.log("CONVERSIONE DA NUMERO DECIMALE A BINARIO DEL NUMERO: " + numero)
    const converti = require('./utils/conversione_binaria.js')
    numero = converti(numero)

} else if(conversione == "2"){
    console.log("CONVERSIONE DA NUMERO BINARIO A DECIMALE DEL NUMERO: " + numero)
    const converti = require('./utils/conversione_decimale.js')
    numero = converti(numero)

} else {
    console.log("cosa scrivi????")
}

console.debug("Il numero convertito è ---> " + numero)