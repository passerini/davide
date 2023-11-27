const http  = require('http')

const server = http.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/html'});
    
    if (req.url === '/') {
        res.write("Benvenuto nella home")
        res.end()
    }

    if (req.url === '/profilo') {
        res.write("Benvenuto nella profilo")
        res.end()
    }
    
   
    res.write('<h2>Errore</h2><p>torna alla <a href="/">home</a></p>')
    res.end()

})

server.listen(3000)