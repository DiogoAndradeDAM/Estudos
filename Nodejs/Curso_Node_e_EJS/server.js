const express = require('express');
const app = express()

//Falando pro express interpretar o ejs
app.set("view engine", "ejs")

//Criando rota
//a barra referencia o site, se pode colocar um nome na frente da barra
app.get("/", function(req, res){
  //por padrão o express quer que o index esteja em uma pasta chamada views
  res.render("index")
})

//Falando para rodar o servidor, estamos dizendo que atráves da porta 8080 se pode executar o servidor
app.listen(8080)
//localhost:8080
console.log("Servidor Ligado")