/*
  Podemos atrelar um evento quando a página carrega, pelo evento load

  E antes do usuário fechar a página pelo evento beforeunload
*/

/*
window.addEventListener("load", function() {
  window.alert("Assine os termos de uso")
})
*/

window.addEventListener("beforeunload", function() {
  event.returnValue = null
})

