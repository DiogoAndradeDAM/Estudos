//For of
//Decompões em partes uma string ou array
let name = "Diogo"
let names = ["Diogo", "Andrade", "de", "Moura"] // for of também pode decompor arrays

for (let char of name){
  console.log(char)
}

//For in
//Serve para pegar partes de um objeto ou array
let Diogo = {
  fname: "Diogo",
  mname: "Andrade",
  lname: "Moura"
}

for (let nameFromDiogo in Diogo){
  console.log(nameFromDiogo)
}