const prompt = require('prompt-sync')();

const N = 5

var vettore = new Array[]

i=0
numerotrovato = false

while (i < N) {
    
    const numero = prompt('\n inserisci un numero ');
    
    console.log(numero)

    for (let index = 0; index < vettore.length; index++) {
        
        if(numero = vettore[index]){
            console.log("trovato")
            numerotrovato = true
        } else {
            console.log("non trovato")
        }
    }

    if (numerotrovato = false) {
        vettore[i] = numero
    }
    i++
}

for (let index = 0; index < vettore.length; index++) {

    console.log(vettore[index])
    
}








