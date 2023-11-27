
function converti(numero) {
    let quoziente = numero
    let base = 2
    let resto = 0
    let risultato = ""

    while (quoziente != 0) {
        quoziente = Math.floor(numero / base); //restituisce il quoziente senza resto
        resto = numero - (quoziente * base); //calcolo il resto
        numero = quoziente
        risultato = resto + risultato // aggiungo il resto alla variabile del risultato
    }
    // console.log("Il numero convertito in binario è il seguente :" + risultato)
    return risultato
}
module.exports = converti;