function envioTexto(){
  let texto = document.getElementById("text1")
  let div = document.getElementById("div2")
  div.innerHTML = `<h1>${texto.textContent}</h1>`
}