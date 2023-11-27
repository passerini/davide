const { ifError } = require('assert');
const { error } = require('console');
const { writeFileSync, readFileSync } = require('fs');
const { write, readFile } = require('fs');

let pippoObj = {
    'nome': 'Andrea',
    'cognome': 'Passerini'
}
console.log("obj: " + pippoObj.nome + " " + pippoObj.cognome)

console.log("scrivo sul file: ")
writeFileSync('./data/testo.txt', pippoObj.cognome, { flag: "a" })

console.log("data: " + readFileSync('./data/testo.txt'))

readFile("./data/dati.txt", "utf8",(error, result) => {
    if (error) {
        console.log(error)
        return
    }
    console.log(result)
})