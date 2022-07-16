const express = require("express")
const app = express()

app.get("/", function(req, res){
    res.sendFile(__dirname+"/html/index.html")
})

app.get("/sobre", function(req, res){
    res.send("Minha pagina sobre")
})

app.get("/blog", function(req, res){
    res.send("Bem-vindo ao meu blog!")
})

app.get("/ola/:nome/:cargo", function(req, res){//":nome" é um parâmetro
    res.send(`<h1>Oi ${req.params.nome}</h1> <h2>Seu cargo é ${req.params.cargo}</h2>`)
})

app.listen("8080", function(){
    console.log("Servidor rodando")
})//Está tem que ser a última linha