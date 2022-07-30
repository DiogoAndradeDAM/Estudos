let num = /[^123]/;

console.log(num.test("1234"))

let notab = /[^ab]/;

console.log(notab.test("a"))
console.log(notab.test("Aqui tem a"))

let nottoaz = /[^a-z]/

console.log(nottoaz.test(" as"))//Note o espaço, ele retornará true
console.log(nottoaz.test("asdsafasisfupqowfasfjn"))

//Quando fora de uma classe ele indica uma busca no começo da string

let notinit = /^Diogo/;

console.log("Diogo Andrade".match(notinit))
console.log("Douglas Andrade".match(notinit))


