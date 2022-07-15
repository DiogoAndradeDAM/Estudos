const express = require('express');
const app = express()

//Falando pro express interpretar o ejs
app.set("view engine", "ejs")

//Criando rota
//a barra referencia o site, se pode colocar um nome na frente da barra
app.get("/", function(req, res){

  //Criando um array com objetos pra fazer graça
  const items = [
    {
      title: "D",
      message: "esenvolver"
    },
    {
      title: "E",
      message: "JS"
    },
    {
      title: "M",
      message: "uito fácil"
    },
    {
      title: "A",
      message: "mor"
    },
    {
      title: "I",
      message: "nstall ejs"
    },
    {
      title: "S",
      message: "intaxe"
    }
  ]

  const subtitle = "Uma linguagem de modelagem para criação de páginas HTML utilizando JavaScript"  
  //por padrão o express quer que o index esteja em uma pasta chamada views
  res.render("/pages/index", /*Passando um objetom isto é só cosmético*/ {
    qualitys: items,
    subtitle: subtitle
  })
})

//O sobre representa a rota, basta colocar /sobre após a porta
app.get("/sobre", function(req, res){
  res.render('pages/about')
})

//Falando para rodar o servidor, estamos dizendo que atráves da porta 8080 se pode executar o servidor
app.listen(8080)
//localhost:8080
console.log("Servidor Ligado")