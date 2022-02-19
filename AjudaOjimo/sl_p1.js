let porta = document.getElementById("door")

door.addEventListener("click", function() {
  let form = document.getElementById("formSenha")
   form.classList.add("hide")
})

let button = document.getElementById("buttonPassword")
button.addEventListener('click', (event) => {
  event.preventDefault()

  let senha = document.getElementById("senha")
  if(senha.value.length == 0){
    window.alert("ERROR nada foi colocado")
  }
  if(senha.value == 'diogo12'){
    window.alert("Um zumbido é escutado e a porta se abre")
    porta.setAttribute('href', 'sala2.html')
  } else {
    window.alert("Senha incorreta")
  }
})